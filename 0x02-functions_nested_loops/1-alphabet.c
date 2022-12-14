#include "main.h"
/* Fun that prints the alphabet, in lowercase
 * use _putchar twice in my code
 */
void	print_alphabet(void)
{
	char c = 'a';

	while ( c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
