#include "main.h"

/**
 * _strlen_recursion - a function that returns the lenght of a string
 * @s: input string
 * Return: lenght of a string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
