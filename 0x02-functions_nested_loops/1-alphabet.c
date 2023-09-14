#include "main.h"
/**
 *print_alphabet - code entery point
 *Description: A C prints alphabet lowercase
 *Return:Always 0 (Success)
*/
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
