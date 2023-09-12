#include "main.h"
/**
 * jack_bauer - somebody looks like!!
 */
void jack_bauer(void)
{
	int m, h;

	for (h = 0; h < 24; h++)
	{
		for (m =0; m < 60; m++)
		{
			_putchar(48 + h / 10);
			_putchar(48 + h % 10);
			_putchar(':');
			_putchar(48 + m / 10);
			_putchar(48 + m % 10);
			_putchar('\n');
		}
	}
}
