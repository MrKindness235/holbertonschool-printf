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
	unsigned int i;
	size_t dataLen = strlen(format);
	const char *p;

	p = format;
	va_start(inputD, format);
	for (i = 0; i < dataLen; i++)
		_checker(p, va_arg(inputD, char *));
	putchar('\n');
	va_end(inputD);
	return (0);
}
