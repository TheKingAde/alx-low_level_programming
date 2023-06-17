#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit =  n % 10;
	printf("Last digit of %d is ", n);
	if (lastDigit > 5)
	{
		printf("%d and is greater than 5\n", lastDigit);
	} else if (lastDigit == 0)
		{
			printf("%d and is 0/n", lastDigit);
		} else
			{
				printf("%d and is less than 6 and not 0\n", lastDigit);
			}
	return (0);
}
