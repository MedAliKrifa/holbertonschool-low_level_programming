#include "main.h"
/**
 * reverse_array - reverse_array to reverse elements of an array
 * @a: pointer
 * @n: integer
 */
void reverse_array(int *a, int n)
{
int s = 0;
int temp;
while (s < n - 1)
{
temp = a[n - 1];
a[n - 1] = a[s];
a[s] = temp;
s++;
n--;
}
}
