#include <stdio.h>
/**
  *main - Entry point
  *Description: 'all single digit numbers of base 10 starting from 0'
  *Return: Always 0 (success)
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
