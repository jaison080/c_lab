/*Program to check whether the given 3 digit number is an Armstrong number*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int n,sum=0,x,i;
	system("clear");
	printf("Enter the number\n");
	scanf("%d",&n);
	i=n;
	while (n>0) 
	{
            x=n%10;
            sum=sum+(x*x*x);
            n=n/10;
        }
        if(sum==i)
        	printf("Armstrong number\n");
        else
        	printf("Not an Armstrong number\n");
        return 0;
} 
