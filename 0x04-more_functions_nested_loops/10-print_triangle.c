#include "main.h"

/**
 * print_triangle - prints triangle using # Character
 * @size: size of tiangle
 */
void print_triangle(int size)
{
	int i, index;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (index = size - i; index > 0; index--)
				putchar(' ');
			for (index = 0; index < i; index++)
				putchar('#');
			if (i == size)
				continue;
			putchar('\n');
		}
	}
	putchar('\n');
}
