#include "main.h"
/*
 * print_alphabet_x10:code entery point
 * Desription:prints alphabet 10 times in lowercase
 * Return:prints the alphabet in lower case x10 (success)
 */
void print_alphabet_x10(void)
{
	int i, ch;

	for (i = 0; i < 10; i++)
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
	_putchar('\n')
}
