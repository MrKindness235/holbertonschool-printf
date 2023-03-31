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
typedef struct formatCheck
{
	const char *format;
	int num;
	const char *charInput;
} check;
void _charprinter(const char *string, int *len);
void _numprinter(int n, int *len);
int _printf(const char *format, ...);
int _checker(const char *formatData, const char *arg, int *len);
#endif
