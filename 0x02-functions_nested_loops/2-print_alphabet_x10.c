#include "main.h"
/**
 * print_alphabet_x10 - a function that prints the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int x, i;

	for (i = 0; i < 10; i++)
	{
		for (x = 97; x < 123; x++)
			_putchar(x);
		_putchar('\n');
	}
}
