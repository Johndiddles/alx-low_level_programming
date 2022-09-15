#include "main.h"

/**
 *
 *
 *
 *
 *
 */

void more_numbers(void)
{
	int i;
	int j;

	for(i = 0; i < 10; i++){
		j = 0
		while (j <= 14)
		{
			if (j <= 9)
			{
				_putchar('0' + j);
			}
			else
			{
				_putchar('0' + j / 10);
				_putchar('0' + j % 10);
			}
			j++;
		}
		_putchar('\n');
		i++;
	}	
}
