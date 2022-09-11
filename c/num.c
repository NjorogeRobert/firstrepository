#include <stdio.h>

int main (void)
{
	int r;
	int b;
	int sum;
	printf("Enter your number: ");
	scanf ("%d", &r);
	scanf("%d", &b);
	
	sum = r + b;
	printf("The sum is %d", sum);

	return (0);
}
