/*Program to write a C program to evaluate the series x-x^3/3!+x^5/5!-x^7/7!....n*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int x,i,k,n,j,fact=1,sign=1;
	float sum;
	system("clear");
	printf("Enter the value of x\n");
	scanf("%d",&x);
	printf("Enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)
	{
		fact=1;
		for(j=1;j<=i;j++)
			fact=fact*j;
		sum=sum+(sign*(pow(x,i)/fact));
		sign*=-1;
	}
	printf("Sum of series = %f\n",sum);
	return 0;	
}
