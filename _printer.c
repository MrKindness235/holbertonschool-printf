#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "main.h"
/**
 * _charprinter - prints a string
 * @string: string or char to be printed
 * Description: takes a given char or string and prints it
 * Return: char or string on sucess or -1 and errno
 */
char _charprinter(char *string)
{
	return(write(1, &string, sizeof(string)));
}
/**
 * _numprinter - prints an int
 * @num: int to be printed
 * Description: takes an int and prints it
 * Return: int on success or -1 and errno
 */
int _numprinter(int num)
{
	return(write(1, &num, sizeof(int)));
}
