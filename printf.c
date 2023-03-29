#include <stdarg.h>
#include <string.h>
#include "main.h"
/**
 * _printf - initializes prototype
 * @format: data type being input
 * @...: function parameter input
 * Description: takes a format data type and input to print
 * Return: 0
 */
int _printf(const char *format, ...)
{
	va_list inputD;
	int i;
	const char *p;
	int inputLen = strlen(format) / 2;

	va_start(inputD, strlen(format) / 2);
	p = format;
	for (i = 0; i < inputLen; i++)
		_checker((*p, va_arg(inputD, char *)));
	putchar('\n');
	va_end(inputD);
	return (0);
}
