#include <stdio.h>

/**
 * main - Entry
 *
 * Description: sum of two numbers
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	int a;
	int b;
	int sum;
	printf("Enter your  numbers: ");
	scanf("%d", &a);
	scanf("%d", &b);
	sum = a + b;
	printf("Your sum is %d", sum);
	return (0);
}
