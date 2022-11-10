#include "sort.h"

/**
 * interchange - Change up two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 *
 * Return: Nothing
 */
void interchange(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
