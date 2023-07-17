#include <stdio.h>
/**
 * main-  program that prints the size of various types on the computer
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
