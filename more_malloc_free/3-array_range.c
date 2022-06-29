#include "main.h"
/**
 * array_range - array_range to allocate an array from min to max
 * @min: minimum value
 * @max: maximum value
 * Return: value of array
 */
int *array_range(int min, int max)
{
    int i, length;
    int *array;
    if (min > max)
        return (NULL);
    length = ((max - min + 1));
    array = malloc(length * sizeof(int));
    if (array == NULL)
        return (NULL);
    for (i = 0; i < length; i++)
    {
        array[i] = min++;
    }
    return (array);
}
