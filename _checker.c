#ifndef CHECKER_C
#define CHECKER_C
#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "main.h"
/**
 *  * _checker - checks and sorts arguments
 *   * @formatData: data types to check
 *    * @arg: arguments to check
 *     * Description: takes input and checks based on format
 */
void _checker(const char *formatData, char *arg)
{
	int i = 0;

	while (*formatData)
	{
		if (formatData[i] == %)
		{
			if (formatData[i + 1] == 'i') || (formatData[i + 1] == 'd')
			{
				check_t.num = atoi(arg);
				_numprinter(check_t.num);
			}
			else if (formatData[i + 1] == 'c') || (formatData[i + 1] == 's')
			{
				chek_t.charInput = arg;
				_charprinter(check_t.charInput);
			}
		}
		i++;
	}
}
#endif
