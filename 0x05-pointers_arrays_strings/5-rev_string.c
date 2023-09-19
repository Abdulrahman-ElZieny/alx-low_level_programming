/**
 * rev_string - revers a string
 * @s: the string
 */
void rev_string(char *s)
{
	char *temp;
	int len;

	for (len = 0; *s; s++)
		len++;

	*temp = *s;
	for (; len; --len)
	{
		*s = temp[len];
		s++;
	}
}
