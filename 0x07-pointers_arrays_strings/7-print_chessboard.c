#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int m;
	int b;

	for (m = 0; m < 8; m++)
	{
		for (b = 0; b < 8; b++)
			_putchar(a[m][b]);
		_putchar('\n');
	}
}