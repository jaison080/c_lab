/*Program to find the factorial of a number using for statement*/
#include <stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,fact=1;
	system("clear");
	printf("Enter the number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("Factorial = %d\n",fact);
	return 0;
}


