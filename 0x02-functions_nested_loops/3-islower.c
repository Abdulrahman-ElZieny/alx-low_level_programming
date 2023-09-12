#include "main.h"
/**
 * _islower - a function that check if a character is lowercase
 * @c: the character to be checked
 * Return: 1 if lowercase 0 otherwise
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	return (0);
}
