#include "main.h"
/**
 * print_diagonal - prints '\' diagonally
 * @n: the number of times the '\' should be printed
 */
void print_diagonal(int n)
{
	int x, i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (x = 0; x < n; x++)
	{
		for (i = 0; i < x; i++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
