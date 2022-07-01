#include "3-calc.h"
/**
 * main - main
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int numb1, numb2, result;
	int (*func)(int, int);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	numb1 = atoi(argv[1]);
	numb2 = atoi(argv[2]);
	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' && numb2 == 0) || (*argv[2] == '%' && numb2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	result = func(numb1, numb2);
	printf("%d\n", result);
	return (0);
}
