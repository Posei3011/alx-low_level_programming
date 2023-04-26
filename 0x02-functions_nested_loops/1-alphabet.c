#include "main.h"

/**
  *print_alphabet - prints the alphabets in lower case
  *
  *Return: void
  */

void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
		_putchar(la);

	_putchar('\n');
}
