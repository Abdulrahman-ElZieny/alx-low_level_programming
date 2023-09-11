#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - check the code
 * Return: Always 0
 */
int main(void)
{
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	x = n;
	while (x >= 10)
		x = x % 10;
	printf("Last digit of %d is %d and is ", n, x);
	if (x > 5)
		printf("greater than 5");
	else if (x == 0)
		printf("0");
	else
		printf("less than 6 and not 0");
	printf("\n");
	return (0);
}
