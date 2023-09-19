/**
 * _strlen - returns the string length
 * @:s: the string
 * Return: the length
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s; len++, s++)
		;
}
