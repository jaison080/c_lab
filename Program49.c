/*Program to print all Krishnamurti numbers in the given range*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,b,sum,fact,l,u;
	system("clear");
	printf("Enter the lower limit\n");
	scanf("%d",&l);
	printf("Enter the upper limit\n");
	scanf("%d",&u);
	printf("Krishnamurthy numbers are\n");
	for(i=l;i<=u;i++)
	{
		sum=0;
		for(j=i;j>0;j=j/10)
		{       
			fact=1;
			b=j%10;
			for(k=1;k<=b;k++)
			{
				fact=fact*k;
			}
			sum=sum+fact;

		}
		if(sum==i)
			printf("%d\n",i);
	}
	return 0;
}	
