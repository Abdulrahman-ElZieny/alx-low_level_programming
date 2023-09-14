/**
 * _isdigit - checks if an int is a digit
 * @c: the int to check
 * Retunr: 1 if digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
