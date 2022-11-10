#include "sort.h"

/**
 * interchange - Change up two integers in an array.
 * @a: The first integer.
 * @b: The second integer.
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

/**
 * selection_sort - Sorts an array of integers in ascending order
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 *
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	int *el;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		el = array + i;
		for (j = i + 1; j < size; j++)
			el = (array[j] < *el) ? (array + j) : el;

		if ((array + i) != el)
		{
			interchange(array + i, el);
			print_array(array, size);
		}
	}
}
