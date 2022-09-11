#include <stdio.h>

int main (void)
{
int num1;
int num2;
printf("Enter your numbers: ");
scanf("%d %d", &num1, &num2);

if (num1 < num2)
{
	printf("%d is less that %d", num1, num2);
}
if (num1 == num2)
{
	printf("%d is equal to %d", num1, num2);
}
if (num1 > num2)
{
	printf("%d id greater than %d", num1, num2);
}
return (0);
}

