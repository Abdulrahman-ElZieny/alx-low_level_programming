/**
 * swap_int - swap the value of 2 pointers with each other
 * @a: pointer 1
 * @b: pointer 2
 */
void swap_int(int *a, int *b)
{
	int *c;

	c = a;
	*a = b;
	*b = c;
}
