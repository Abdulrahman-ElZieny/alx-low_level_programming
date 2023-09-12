#include "main.h"
/**
 * times_table - func prints times table
 */
void times_table(void)
{
	int x, z, c;

	for (x = 0; x < 10; x++)
	{
		for (z = 0; z < 10; z++)
		{
			c = x * z;
			if (z != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (c > 10)
				_putchar(48 + c / 10);
			else
				_putchar(' ');
			_putchar(48 + c % 10);
		}
		_putchar('\n');
	}
}
