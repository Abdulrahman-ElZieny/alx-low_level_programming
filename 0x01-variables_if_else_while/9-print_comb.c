#include <stdio.h>
/**
 * main - check the code
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
		if (x + 1 == 58)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
