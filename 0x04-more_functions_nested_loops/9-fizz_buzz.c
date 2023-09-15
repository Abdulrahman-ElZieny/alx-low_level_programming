#include <stdio.h>
/**
 * main - FizzBuzz
 * Return: Always 0
 */
int main(void)
{
	int x, t, f;

	for (x = 1; x <= 100; x++)
	{
		t = x % 3;
		f = x % 5;
		if (x - 1)
			putchar(' ');
		if (!t && !f)
			printf("FizzBuzz");
		else if (!t)
			printf("Fizz");
		else if (!f)
			printf("Buzz");
		else
			printf("%d", x);
	}
	putchar('\n');

	return (0);
}
