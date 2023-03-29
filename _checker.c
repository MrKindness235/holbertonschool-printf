#ifndef CHECKER_C
#define CHECKER_C
#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "main.h"
/**
 * _checker - checks and sorts arguments
 * @formatData: data types to check
 * @arg: arguments to check
 * Description: takes input and checks based on format
 */
void _checker(const char *formatData, char *arg)
{
	const char *intCH = "id", *charCH = "cs";

	while (*formatData)
	{
		if (strchr(intCH, *formatData) || strchr(charCH, *formatData))
		{
			if (strchr(intCH, *formatData))
			{
				check_t.num = atoi(arg);
				_numprinter(check_t.num);
			}
			else if (strchr(charCH, *formatData))
			{
				check_t.charInput = arg;
				_charprinter(check_t.charInput);
			}
		}
		formatData++;
	}
}
#endif
