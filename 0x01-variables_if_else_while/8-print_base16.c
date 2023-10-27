#include <stdio.h>
/**
* main - Entry point
* print all single digits fron 0 to 10
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	char i;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
