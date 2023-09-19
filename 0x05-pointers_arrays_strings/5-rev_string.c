/**
 * rev_string - revers a string
 * @s: the string
 */
void rev_string(char *s)
{
	char *temp;
	int len;

	*temp = *s;
	for (len = 0; *s; s++)
	{
		len++;
		temp++;
	}

	for (; len; --len)
	{
		*s = *temp;
		s++;
		temp--;
	}
}
