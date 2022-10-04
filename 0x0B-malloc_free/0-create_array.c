#include "main.h"

/**
 * create_array - create an array of and initialize it with a specific value
 * @size: the desired size of the array
 * @c: the value with which the array should be initialized
 *
 * Return: NULL if size is 0 or memory allocation fails,
 * otherwise 0
 */

char *create_array(unsigned int size, char c)
{
	char *ar;

	if (size == 0)
		return (NULL);

	ar = (char *) malloc(sizeof(char) * size);

	if (ar)
	{
		while (size > 0)
			ar[--size] = c;
	}
	return (ar);
}
