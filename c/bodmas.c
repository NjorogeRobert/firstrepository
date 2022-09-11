#include <stdio.h>

int main (void)
{
	int a;
	int b;
	int c;
	int d;
	int value;
	printf("Enter numbers: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	value = (d + c) / (a * b);
	printf("our answer is %d", value);
	return (0);
}
