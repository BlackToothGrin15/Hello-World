#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	float a, b, c, s, ar;
	printf("Enter 1st side:");
	scanf_s("%f", &a);

	printf("Enter 2nd side:");
	scanf_s("%f", &b);

	printf("Enter 3rd side:");
	scanf_s("%f", &c);

	s = (a + b + c) / 2.0;

	ar = sqrt(s * (s - a) * (s - b) * (s - c));

	printf("Area of triangle:%f", ar);
}