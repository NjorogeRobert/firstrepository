#include <stdio.h>

int main (void)
{
	int hotdogs;
	int loopcount;
	int total;
	int average;
	loopcount=0;
	total=0;
	while(loopcount < 5)
	{
		printf("Enter number of hotdogs: ");
		scanf("%d", &hotdogs);
		total=total+hotdogs;
		loopcount=loopcount+1;
	}
	average=total/5;
	printf("The total average number of dogs was %d", average);
	return (0);
}
