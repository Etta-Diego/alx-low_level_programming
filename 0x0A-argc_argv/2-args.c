#include <stdio.h>
/**
 * main - program that prints all arguments it receives.
 * @argc: argument count
 * @argv: argument vector
 * Return: the command line argument
 */

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}

	return (0);
}
