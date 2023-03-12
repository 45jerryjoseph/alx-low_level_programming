#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0 Always sucess 
 */
int main(int argc, char *argv[])
{
	int x;
	(void)argv;

	for (x = 0; x <= argc; x++)
	{}
	printf("%d\n", x - 2);

	return (0);
}
