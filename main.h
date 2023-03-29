#ifndef _FILE_NAME_H_
#define _FILE_NAME_H_

#include <stdio.h>
#include <stdlib.h>
/**
 * struct formatCheck - checking input format
 * @format: actual format to pass
 * @num: int to pass
 * @charInput: char to pass
 */
struct formatCheck
{
	const char *format;
	int num;
	char *charInput;
} check_t;
char _charprinter(char *string);
int _numprinter(int num);
int _printf(const char *format, ...);
void _checker(const char *formatData, char *arg);
#endif
