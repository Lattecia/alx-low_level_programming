#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = -98;
	ld = n % 10;
if (ld > 5)
	{
printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, ld);
	}
else if (ld < 6 && ld != 0)

printf("last digit of %d is %d and is less than 6 and not 0", n, ld);

return (0);
	}
