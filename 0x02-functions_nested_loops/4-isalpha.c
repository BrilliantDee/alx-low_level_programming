#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @ch: the character to be checked
 * Return: 1 if c is a letter, lowercase or uppercase
 */

int _isalpha(int ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return (1);
	else
		return (0);
}
