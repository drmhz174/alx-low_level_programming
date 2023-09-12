#include <stdio.h>
/**
 * main-main entery point
 * Description:prints alphabets with anew line
 * Return: 0 success
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
	/*	putchar('\n');*/
		ch++;
	}
	putchar('\n');
	return (0);
}
