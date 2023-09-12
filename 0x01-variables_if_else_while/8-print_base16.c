#include <stdio.h>
/**
 * main - main entery point
 * Description:print hexadecimal
 * Return:0 success
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
	if (i < 10)
	{
	putchar('0' + i);
	}
	else
	{
		 putchar('a' + (i - 10));
	}
	}
	putchar('\n');
	return (0);
}
