#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: the size
 */
void print_triangle(int size)
{
	int x, i;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}


	for (x = 1; x <= size; x++)
	{
		for (i = size - x; i > 0; i--)
			_putchar(' ');
		for (i = 0; i < x; i++)
			_putchar('#');
		_putchar('\n');
	}
}
