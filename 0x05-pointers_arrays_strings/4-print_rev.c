#include <stdio.h>
/**
 * print_rev - prints a string in reverse
 * @s: the string
 */
void print_rev(char *s)
{
	int len;
	char *temp;

	temp = s;

	for (len = -1; *s; s++)
		len++;
	for (; len + 1; len--, s--)
		putchar(temp[len]);
	putchar('\n');
}
