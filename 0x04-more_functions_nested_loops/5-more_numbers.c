#include "main.h"
/**
 * more_numbers - check the code
 */
void more_numbers(void)
{
	int x, i;

	for (x = 0; x < 10; x++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar('1');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
