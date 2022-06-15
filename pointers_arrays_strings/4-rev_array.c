#include "main.h"
/**
 * reverse_array - reverse_array to reverse elements of an array

 * @a: pointer
 * @n: integer
 */
void reverse_array(int *a, int n)
{
int s, temp;
while (s < n)
{
temp = a[s];
a[s] = a[n];
a[n] = temp;
s++;
n--;
}
}