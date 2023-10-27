#include <stdio.h>
/**
* main - Program to print all lowercase alphabet
* except q and e followed by new line.
* Return: Always 0 (Success)
*/
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{

		if (x != 'e' && x != 'q')
	{

		putchar(x);
	}

	}
	putchar('\n');
	return (0);
}
