#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - check if last digit of random number is
 * greater than or less than 5, or if it is 0
 *
 *
 * Return: 0 on success
 */
int main(void)
{
	int n, lastdigit;
	char last[] = "Last digit of ";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	if (lastdigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
	}
	else if (lastdigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastdigit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
	}
	return (0);
}
