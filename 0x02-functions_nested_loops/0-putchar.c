#include "main.h"
/**
 *main - main entery point
 *Description: A C prints __putchar
 *Return:Always 0 (Success)
*/
int main(void)
{
	char str[] =  "_putchar";
	in ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');
	return (0);
}
