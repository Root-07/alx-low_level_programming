#include "main.h"
/**
 * main - print "_putchar" followed by a new line.
 * Description: You are not allowed to include standard libraries
 * Return: 0
 */
int main()
{
	char p[] = "_putchar";
	int i = 0;
	while (p[i] != '\0')
	{
		_putchar(p[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
