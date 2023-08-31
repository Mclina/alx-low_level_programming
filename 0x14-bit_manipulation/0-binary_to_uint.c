#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - This funtion convert binary to decimal
 * @b: This is my string of entry
 * Return: The return converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int len = 1, index = 0;

	if (!b)
		return (0);
	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
	}
	for (index = index - 1; index >= 0; index--)
	{
		char curr;

		curr = b[index];
		if (curr == '1')
		{
			decimal += len;
		}
		len = len * 2;
		if (index == 0)
			break;
	}
	return (decimal);
}
