#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line
 * @str: AN input string
 * Return: nothing
 */
void puts_half(char *str)
{
	int len;
	int i;
	int n;

	len = 0;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
		n = (len + 1) / 2;

	for (i = n; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
