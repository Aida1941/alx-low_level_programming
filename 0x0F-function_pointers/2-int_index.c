#include "function_pointers.h"

/**
 * int_index - earches for an integer
 * @array: array to search in
 * @size: array size
 * @cmp: pointer
 *
 * Return: index of the first element or 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
