#include <stdio.h>
/**
 * main-main entery point
 * Description: print alphabetics in lowercase using putchar
 * Return: 0 (Success)
*/
int main(void)
{
	char ch = 'a'; /* Declare ch as a global variabl*/

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
