#include "main.h"
/**
 * print_to_98 - prints from number(n) to 98
 * @n: start point
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("98\n");
		return;
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
		putchar('\n');
	}
	else
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
		putchar('\n');
	}
}
