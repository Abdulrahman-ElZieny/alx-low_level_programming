/**
 * rev_string - revers a string
 * @s: the string
 */
void rev_string(char *s)
{
	char *temp, *rev_string;
	int len;

	rev_string = temp;
	for (len = 0; *s; s++)
		len++;

	for (; len; s--)
	{
		*temp = *s;
		temp++;
	}

	return (rev_string)
}
