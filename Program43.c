/*Program to find the sum of the digits of a number and also print the no of digits*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i=0,sum=0;
	system("clear");
	printf("Enter the number\n");
	scanf("%d",&n);
	while (n!=0) 
	{
            sum=sum+n%10;
            n=n/10;
            i++;
        }
        printf("Sum of digits = %d\n",sum);
        printf("No: of digits = %d\n",i);
        return 0;
} 
