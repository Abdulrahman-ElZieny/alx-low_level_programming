#include "main.h"
/**
 * print_line - check the code
 * @n: the number of lines
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (x = 0; x < n; n++)
		_putchar('_');
	_putchar('\n');
}
