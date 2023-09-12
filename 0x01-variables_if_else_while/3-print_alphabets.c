#include <stdio.h>
/**
 * main-main entery point
 * description: print alphabet in lower then upper case
 * Return:0 (success)
*/
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*print lowercase*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++
	}
	/*print uppercase*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++
	}
	putchar('\n');
	return (0);
}
