#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 * Return: Always 0 (Success)
*/

int main(int argc, char **argv)

{
	int sum;

	if (argc == 3)

	{

		sum = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", sum);

	}

	else

	{

		printf("Error\n");

		return (1);

	}

	return (0);

}
