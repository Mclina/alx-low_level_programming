#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - print each array else on a newl.
 * @array: array
 * @size: how many elem to print 
 * @action: pointer to print in regular or hex
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
 
	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
