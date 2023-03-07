#include "main.h"

/**
 * find_strlen - Returns the lenght of a string.
 * @s: input string
 * Return: lenght of string
 */

int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}
	return (len);
}

/**
 * check_palindrome - check if a string is palindrome
 * @s: string input
 * @len: lenght of string.
 * @index: index of the string.
 * Return: if the string is a palindrome -1
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
	{
		return (1);
	}
	if (s[index] == s[len - index - 1])
	{
		return (check_palindrome(s, len, index + 1));
	}
	return (0);
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string input
 * Return: 1 if palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index));
}
