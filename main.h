#ifndef _FILE_NAME_H_
#define _FILE_NAME_H_

#include <stdio.h>
#include <stdlib.h>
/**
 * struct formatCheck - checking input format
 * @c: input %c
 * @s: input %s
 * @i: input %i
 * @d: input %d
 */
typedef struct formatCheck
{
	const char *format;
	int num;
	char *charInput;
} check;
char _charprinter(char *);
int _numprinter(int);
int _printf(const char *format, ...);
void _checker(const char *formatData, char *arg);
#endif
