#include <stdio.h>
/**
 * main - program that prints all the numbers of base 16 in lowercase
 *
 * Return: Return 0 this time around.
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
