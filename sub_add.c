//Program to show usage of switch case
/* take 2 double integers and an i/p from user :

 if "a" , add the integers and print "sum is .." ,

 if "s" , subtract the integers and print "diff is .." ,

 default case : print "defaut case- noaction"*/

#include<stdio.h>
int main()
{
	double Num1, Num2, sum, diff;
	char ch;
	printf("Enter value for Num1: ");
	scanf("%lf", &Num1);
	printf("Enter value for Num2: ");
	scanf("%lf", &Num2);
	printf("Enter option: ");
	scanf(" %c", &ch);
	switch(ch)
	{
		case 'a':
		        sum  = Num1 + Num2;
			printf("Sum is %g\n", sum);
			break;
		case 's':
			diff = Num1 - Num2;
			printf("Diff is %g\n", diff);
			break;
		default:
			printf("default case - noaction\n");
			break;
	}
}

