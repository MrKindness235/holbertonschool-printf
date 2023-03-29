#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _checker - checks and sorts arguments
 * @formatData: data types to check
 * @arg: arguments to check
 * Description: takes input and checks based on format
 */
void _checker(const char *formatData, char *arg)
{
	const char *p;
	p = formatData;
	while (*p)
	{
		if (*p == '%')
		{
			formatCheck check;
			if (*p == 'i' || *p == 'd')
			{
				check.num = atoi(arg);
				_numprinter(check.num);
			}
			if (*p == 'c' || *p == 's')
			{
				check.charInput = arg;
				_charprinter(check.charInput);
			}
		}
	}
}
