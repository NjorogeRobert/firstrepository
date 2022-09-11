#include <stdio.h>

int main (void)
{
	int a;
	int b;
	printf("enter two numbers: ");
	scanf("%d %d", &a, &b);
	if(a < b)
	{
		printf("%d is less than %d", a, b);
	}
	if (a == b)
	{
		printf("%d is equal to %d", a, b);
	}
	if (a > b)
	{
		printf("%d is greater than %d", a, b);
	}
	return (0);
}
