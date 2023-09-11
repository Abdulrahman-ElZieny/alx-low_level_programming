#include <stdio.h>
/**
 * main - check the code
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = 97; x < 123; x++)
	{
		if (x == 101 || x == 113)
			continue;
		putchar(x);
	}
	putchar('\n');

	return (0);
}
