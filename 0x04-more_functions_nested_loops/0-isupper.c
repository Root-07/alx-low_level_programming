#include "main.h"
/**
 * isupper: function that checks for uppercase character.
 * return: 1 is uppercase and 0 otherwise.
 */
int _isupper(int c)
{
	if(c > 63 && c < 91)
		return(1);
	return(0);
}
