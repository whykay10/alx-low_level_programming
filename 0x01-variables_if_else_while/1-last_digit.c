#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * Return: Always zero when successful
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	/* your code goes there */
	if (m > 5)
		printf("The last digit of %d is %d  and is greater than 5", n, m);
	else if (m == 0)
		printf("The last digit of %d is %d and is 0", n, m);
	else if (m < 6 && m != 0)
		printf("The last digit of %d is %d and is less than 6 and not 0", n, m);
	printf("\n");
	return (0);
}
