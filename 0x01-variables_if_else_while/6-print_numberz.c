#include <stdio.h>
/**
 * main - main entery point
 * Description:print numbers in separate lines
 * Return: 0 success
*/
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	putchar(i + '0'); /* Convert the integer to its character representation*/
	}
	putchar('\n');
	return (0);
}
