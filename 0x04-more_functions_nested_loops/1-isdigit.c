#include "main.h"
/**
 * _isdigit - fun that checks for digit (0 though 9).
 * return : 1 if c is digit .
 * return : 0 otherwise .
 */
int _isdigit(int c)
{
	if (c > '0' && c < '9')
		return(1);

	return(0);	
}
