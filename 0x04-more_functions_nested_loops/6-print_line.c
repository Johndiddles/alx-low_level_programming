#include "main.h"

/**
 *print_line - check args for an int
 *
 *@n - int passed into print_line();
 *
 */

void print_line(int n)
{
	int line;

	line = 0;
	if (n > 0)
	{
		while (line < n)
		{
			_putchar('_');
			line++;
		}
	}
	_putchar(10);
}

