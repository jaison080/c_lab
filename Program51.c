/*Program to find the maximum and minimum values from an array of integers*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[1000],i,n,min,max;
	system("clear");
    	printf("Enter size of the array \n");
    	scanf("%d",&n);
    	printf("Enter elements in array \n");
    	for(i=0;i<n;i++)
    	{
        	scanf("%d",&a[i]);
    	}
 	min=max=a[0];
    	for(i=1;i<n;i++)
    	{
         	if(min>a[i])
		  	min=a[i];   
		if(max<a[i])
		    	max=a[i];       
    	}
     	printf("Minimum of array is : %d",min);
        printf("\nMaximum of array is : %d\n",max);
 	return 0;
}
