#include <stdio.h>
/**
 * print_rev - prints a string in reverse
 * @s: the string
 */
void print_rev(char *s)
{
	int len;

	for (len = -1; *s; s++)
		len++;
	for (; len; len--, s--)
		putchar(s);
	putchar('\n');
}
