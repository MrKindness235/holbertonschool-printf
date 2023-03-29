#ifndef CHECKER_C
#define CHECKER_C
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
			if (*p == 'i' || *p == 'd')
			{
				check_t.num = atoi(arg);
				_numprinter(check_t.num);
			}
			if (*p == 'c' || *p == 's')
			{
				check_t.charInput = arg;
				_charprinter(check_t.charInput);
			}
		}
		p++;
	}
}
#endif
