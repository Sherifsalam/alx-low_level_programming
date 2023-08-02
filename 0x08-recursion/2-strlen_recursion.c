#include "main.h"

/**
 *  _strlen_recursion- prints a string, followed by a new line
 * @s: pointer to the string
 * Return : void
*/

int _strlen_recursion(char *s)
{
int ntr = 0;

if(*S > '\0')
{
	ntr += _strlen_recursion(s + 1) + 1
}
return (ntr);
}
