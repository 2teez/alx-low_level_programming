#include <stdio.h>
/**
 * print_fizz_buzz - prints fizz, buzz and fizzbuzz
 * @i: size is the first parameter
 * Return: void
 */
void print_fizz_buzz(int i)
{

	if (i % 15 == 0)
	{
		printf("%s ", "FizzBuzz");
	}
	else if (i % 3 == 0)
	{
		printf("%s ", "Fizz");
	}
	else if (i % 5 == 0)
	{
		printf("%s ", "Buzz");
	}
	else
	{
		printf("%d ", i);
	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		print_fizz_buzz(i);
	}

	putchar('\n');

	return (0);
}
