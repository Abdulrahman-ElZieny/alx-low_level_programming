#include "main.h"
/**
 * print_sign - a func to print the sign of a number (- or + or 0)
 * @n: the number to check it's sign
 * Return: 1 if positive, -1 if negative, 0 if 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
