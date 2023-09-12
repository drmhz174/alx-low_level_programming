#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/*
 * main - main entery
 * description : a c using if and else if to check number
 * return : always 0 (Success)
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
	printf("%i is zero\n", n);
	else if (n > 0)
	printf("%i is positive\n", n);
	else
	printf("%i is negativ\n", n);
	return (0);
}
