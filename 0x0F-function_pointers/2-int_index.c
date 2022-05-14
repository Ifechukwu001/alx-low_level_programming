/**
 * int_index - searches for an integer.
 * @array: Array to be searched.
 * @size: Size of the array.
 * @cmp: Callback conditional function.
 * Return: Index of the found character.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		while (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
