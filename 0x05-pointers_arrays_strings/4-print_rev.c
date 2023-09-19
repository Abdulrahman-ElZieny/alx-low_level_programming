#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string
 */
void print_rev(char *s)
{
	int len;

	len = _strlen(s) - 1;
	for (len = -1; *s; s++)
		len++;
	for (; len; len--)
		putchar(s[len]);
	putchar('\n');
}
