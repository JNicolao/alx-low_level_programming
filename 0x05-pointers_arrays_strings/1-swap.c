#include "main.h"

/**
 * swap_int - swaps the values of selected integers.
 * @a: first integer.
 * @b: second integer.
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
