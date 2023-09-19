#include <stdio.h>
/**
 * main - Printing size of computer types
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char u;
	int e;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(u));
	printf("Size of an int: %lu byte(s)\n", (unsigned long) sizeof(e));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(d));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(f));

	return (0);
}
