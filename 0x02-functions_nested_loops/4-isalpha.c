#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 * @c: the character to be checked
 * main - letter, lowercase or uppercase
 * Return: Either 1 or 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
