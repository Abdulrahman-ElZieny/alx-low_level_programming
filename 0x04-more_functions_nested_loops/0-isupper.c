/**
 * _isupper - check if a char is an upper
 * @c: the char to check
 * Return: 1 if upper 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
