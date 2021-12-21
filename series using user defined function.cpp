#include<stdio.h>
double series(double a, double b)//user defined function
{
	double i, j, fact, sign = -1;
	double  p, sum = 0;
	for (i = 1; i <= b; i += 2)
	{
		p = 1;
		fact = 1;
		for (j = 1; j <= i; j++)
		{
			p = p * a;
			fact = fact * j;
		}
		sign = -1 * sign;
		sum = sum + sign * p / fact;
	}
	return sum;
}

int main()
{
	double answer;
	double x, n;
	printf("Enter the value of x : ");
	scanf_s("%lf", &x);
	printf("Enter the value of n : ");
	scanf_s("%lf", &n);
	answer = series(x, n);
	printf("Summation is %lf", answer);
	return 0;
}