#ifndef PRINTER_C
#define PRINTER_C
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "main.h"
/**
 * _charprinter - prints a string
 * @string: string or char to be printed
 * Description: takes a given char or string and prints it
 */
void _charprinter(const char *string, int *len)
{
	int stringLen = strlen(string);

	if (string == NULL)
	{
		_charprinter("(nil)", len);
		return;
	}
	else
	{
		write(1, string, stringLen);
		(*len) += stringLen;
	}
}
/**
 * _numprinter - prints an int
 * @num: int to be printed
 * Description: takes an int and prints it
 * Return: int on success or -1 and errno
 */
void _numprinter(int n, int *len)
{
	unsigned int num;

	if (n < 0)
	{
		num = -n;
		putchar('-');
		(*len)++;
	}
	else
		num = n;
	if (num / 10)
		_numprinter(num / 10, len);
	putchar(num % 10 + '0');
	(*len)++;
}
#endif
