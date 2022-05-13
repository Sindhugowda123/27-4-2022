/*
 a) If the user enters a zero, the loop terminates

 b) If the user enters a negative number, it's not added to the result */

#include<stdio.h>
int main()
{
	int num, num1, sum=0;
	printf("Enter number: ");
	scanf("%d", &num);
	if(num > 0 && num <= 10)
	{
		for(int i=0;i<num;i++)
		{
			printf("Enter number: ");
			scanf("%d", &num1);
			if(num1 == 0)
			{
				break;
			}
			else if(num1 < 0)
			{
				continue;
			}
			else
			{
				sum = sum + num1;
			}
		}
		printf("Sum is %d\n", sum);
	}
	else
	{
		printf("Maximum number is 10\n");
	}
}

