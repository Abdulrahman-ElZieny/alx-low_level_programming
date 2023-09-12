#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: the number
 * Return: the last digit
 */
int print_last_digit(int n)
{
	if (n == -2147483648)
		n = 48;
	if (n < 0)
		n = -n;
	for (; n > 9; n %= 10)
		;
	_putchar(n + 48);
	return (n);
}
