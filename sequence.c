/* Write a program that checks whether a given input sequence is valid.
Input format is just a sequence of integers.
Output format should be one of the following:
input1  : sequence is valid
input2  : sequence is not valid*/

#include<stdio.h>
#define SIZE 10
int main()
{
	int arr[SIZE];
	printf("Enter array elements: ");
	for(int i = 0;i < SIZE;i++)
	{
		scanf("%d", &arr[i]);
	}
	int k = 0, j, flag = 0;
	for(int i = arr[0];i <= arr[SIZE-1]; i++)
	{
		for(j = k;j < k+i;j++)
		{
			if(arr[j] != i)
			{
				flag = 1;
				break;
			}
		}
		if(flag == 1)
		{
			break;
		}
		else
		{
		k = j;
		}
	}
	if(flag == 0)
	{
		printf("Sequence is valid\n");
	}
	else
	{
		printf("Sequence is not valid\n");
	}
}

