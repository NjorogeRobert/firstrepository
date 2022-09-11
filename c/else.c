#include <stdio.h>

/**
 * if else if and else statements
 */
int main (void)
{
	int age;

	printf("Enter your age: ");

	scanf("%d", &age);
	if (age <=100 && age >= 60)
	{
		printf("Hello old person!");
	}
	else if (age < 60 && age >= 40)
	{
		printf("Heeello beautiful!!");
	}
	else if (age < 40 && age >= 20)
	{
		printf("Hello princess!!");
	}
	else
	{
		printf("Grow first");
	}
	return (0);
}

