#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * @array: Array to be sorted using bubble sort algorithm
 * @size: Size of array
 * Return: Sorted array
 */
void bubble_sort(int *array, size_t size)
{
	size_t a;
	size_t b;
	int temp;

	if (size < 2)
		print_array(array, size);

	if (array == NULL)
		printf("error");

	for (b = 0; ((array[b] < array[b + 1]) || array[b + 1]) != '\0'; b++)
	{
		for (a = 0; a < size - 1; a++)
		{
			if (array[a] > array[a + 1])
			{
				temp = array[a];
				array[a] = array[a + 1];
				array[a + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
