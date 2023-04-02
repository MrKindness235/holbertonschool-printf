#ifndef CHECKER_C
#define CHECKER_C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _checker - checks and sorts arguments
 * @formatData: data types to check
 * @arg: arguments to check
 * @len: len of total string to be returned to _printf
 * Description: takes input and checks based on format
 * Return: total len
 */
int _checker(const char *formatData, const char *arg, int *len)
{
	while (*formatData)
	{
		if (*formatData == '%')
		{
			formatData++;
			if (*formatData == 's' || *formatData == 'c')
			{
				if (*formatData == 's')
				{
					_charprinter(arg, len);
					len += strlen(arg);
					return (1);
				}
				else if (*formatData == 'c')
				{
					putchar(*arg);
					(*len)++;
					return (1);
				}
			}
			else if (*(formatData + 1) == '%')
			{
				putchar('%');
				(*len)++;
				formatData += 2;
			}
			else
			{
				return (-1);
			}
		}
		else
		{
			putchar(*formatData);
			(*len)++;
		}
		formatData++;
	}
	return (*len);
}
#endif
