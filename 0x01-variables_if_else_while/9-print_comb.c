#include <stdio.h>
/**
 *main - main entery point
 *Description:AC prints
 *Return:Always 0 (Success)
*/
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + 48);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
