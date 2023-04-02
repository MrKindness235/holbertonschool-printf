#include <string.h>
#include <stdarg.h>
#include <stdio.h>
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
	int n, len = 0;

	va_start(inputD, format);
	while (*format)
	{
		if (*format != '%')
		{
			putchar(*format);
			len++;
		}
		else
		{
			format++;
			if (*format == 's' || *format == 'c')
			{
				if (*format == 'c')
				{
					char c = va_arg(inputD, int);
					putchar(c);
					len++;
				}
				else if (*format == 's')
				{
					char *s = va_arg(inputD, char *);
					if (s == NULL)
						s = "(nil)";
					_charprinter(s, &len);
					len += strlen(s);
				}
			}
			else if (*format == '%')
			{
				putchar('%');
				len++;
			}
			else if (*format == 'd' || *format == 'i')
			{
				n = va_arg(inputD, int);
				_numprinter(n, &len);
			}
		}
		format++;
	}
	va_end(inputD);
	return (len);
}
