#include <stdio.h>
/**
 * main - program prints the alphabet in lowercase, followed by a new line
 * Return: Return 0 this time.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);

}
