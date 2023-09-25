#include "sort.h"

/**
 * bubble_sort -> sorts an array of ints in ascending order
 * @array: Array of integers#
 * @size: Array's size
 */

void bubble_sort(int *array, size_t size)
{
	int save = 0;

	if (size < 2 || array == NULL)
		return;
	for (size_t j = size; j > 0; j--)
	{
		for (size_t i = 0; i < size - 1; i++)
		{
			if (array[i + 1] < array[i])
			{
				save = array[i];
				array[i] = array[i + 1];
				array[i + 1] = save;
				print_array(array, size);
			}
		}
	}
}
