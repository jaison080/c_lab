/*Program to generate the Fibonacci series 0 1 1 2 3 5 8…..n ( use do while..read n)*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a=0,b=1,c,n,i;
	system("clear");
	printf("Enter the no of terms\n");
	scanf("%d",&n);
	i=0;
	if(n==1)
		printf("%d,",a);
	else if(n==2)
	{	
	        printf("%d,",a);
		printf("%d,",b);
	}
	else
	{
       		printf("%d,",a);
		printf("%d,",b);
		do
        	{
            		c=a+b;	
            		printf("%d,",c);
           		a=b;
            		b=c;
            		i++;
        	}
        	while(i!=(n-2));
        	printf("\n");
        }	
        return 0;
}
