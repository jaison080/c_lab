/*Program to print all prime numbers in a given range*/
#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int i,p,u,l,n;
	system("clear");
    	printf ("Enter the lower limit : ");
    	scanf ("%d",&l);
    	printf ("Enter the upper limit : ");
    	scanf ("%d", &u);
    	if(l>=2)
    	{
        	printf ("Prime numbers are: ");
        	for(n=l+1;n<u;n++)
        	{
            		p=1;
            		for(i=2;i<=n/2;i++)
                	if(n%i==0)
                	{
                    		p=0;
                    		break;
                	}
                	if(p==1)
                		printf ("\t %d",n);
        	}
        	printf ("\n");
    	}
    	else
    	{
        	printf("Enter lower number must be greater than 1\n");
    	}
    	return 0;
}
