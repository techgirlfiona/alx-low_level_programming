#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: return 0 this time around.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
