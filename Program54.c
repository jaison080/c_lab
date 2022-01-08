/*Program to find the mean,variance and standard deviation of set of integer data.*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
   	int i,n;
   	float dev,sum=0.0,sqr=0.0,mean,value,variance=0.0,a[100];
   	system("clear");
   	printf("Enter value of n : ");
   	scanf("%d",&n);
   	printf("\nEnter numbers \n");
   	for(i=0;i<n;i++)
   	{
      		scanf("%f",&a[i]);
      		sum=sum+a[i];
   	}
   	mean=sum/n;
   	sqr=0;
   	for(i=0;i<n;i++)
   	{
     		value=a[i]-mean;
     		sqr=sqr+value*value;
    	}
     	variance=sqr/n;
     	dev=sqrt(variance);
     	printf("\nMean of %d numbers = %f\n",n,mean);
     	printf("\nVariance of %d numbers = %f\n",n,variance);
     	printf("\nStandard deviation of %d numbers = %f\n",n,dev);
     	return 0;
}
