#include <stdio.h>
/**
 * main - main entery point
 * Description: print lowercase alphabete in reverse
 * Return:0 success
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}

