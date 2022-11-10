#include "sort.h"

/**
 * interchange - Swap two  given integers
 * @a: First integer
 * @b: Second integer
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
