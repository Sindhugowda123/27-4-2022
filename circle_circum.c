#include<stdio.h>
#define pi 3.14

int main()
{
	float radius;
	float area, circumference;
	printf("Enter radius value: ");
	scanf("%f", &radius);
	area = pi * radius * radius;
	circumference = 2 * pi * radius;
	printf("Area of circle: %f\n", area);
	printf("Circumference of circle: %f\n", circumference);
}

