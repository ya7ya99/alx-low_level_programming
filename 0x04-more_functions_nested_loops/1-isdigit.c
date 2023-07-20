#include "main.h"
/**
* _isupper - checks for uppercase character
* @c: the character to be checked
* Return: 1 if c is uppercase, 0 otherwise7
*/
int _isupper(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
