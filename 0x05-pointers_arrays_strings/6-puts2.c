#include "main.h"
#include <stdio.h>

/**
 * puts2 - this function print only the even numbers.
 * @str: is the principal parameter.
 * Return: Always 0.
 */

void puts2(char *str)

{

	int i = 0;



	while (str[i] != 0)

	{

		if ((i % 2) == 0)

			putchar(str[i]);

		i++;

	}

	putchar('\n');

}
