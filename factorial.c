/*
* Program: To find the factorial of entered number.
*Author: Ashim Shrestha.
Date: July 17, 2016.
Reference:  Data structures using C and C++, chap 3, page 117
*/

#include<stdio.h>

int factorial(int);

int main()
{
	int n,fact;
	
	printf("Enter the number you want to get factorial of:");
	scanf("%d",&n);
	
	fact=factorial(n);	
	
	printf("The factorial of %d is %d",n,fact);
}

int factorial(int a)
{
	int y=a-1;
	if(a==0)
	{
		return 1;
	}
	else
	{
		return (a*factorial(y));
	}
}

