#include <stdio.h>

/**
 * main - Prints the name of the file of the programme it was compiled from
 * fowolled by a new line.
 * Return: Always 0.
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
