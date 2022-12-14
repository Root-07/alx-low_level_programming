#include "main.h"

/**
 * Fun that prints the alphabet, in lowercas.
 *
 * use _putchar twice in my code.
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
