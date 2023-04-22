#include <stdio.h>
/**
  *main - Entry oint
  *Description: 'Alphabets in lower case except e and q'
  *Return: Always 0 (success)
  */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
