#include "main.h"
/**
 * _isalpha - a fuction that checks if input(character) is a letter
 * @c: the character to be checks
 * Return: 1 if character 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	return (0);
}
