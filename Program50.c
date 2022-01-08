/*Program to find the average of list of numbers*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, n;
    	float total = 0.0, average;
    	system("clear");
    	printf ("Enter the value of N \n");
    	scanf("%d", &n);
    	int a[n];
    	printf("Enter %d numbers\n", n);
    	for (i=0;i<n;i++)
    	{	
    		scanf("%d", &a[i]);
	}
    	for (i=0;i<n;i++)
    	{

        	total+=a[i];

    	}
	average=total/n;
	printf("Average of numbers =  %.2f\n", average);
	return 0;
}
