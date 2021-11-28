/*Program to find the biggest of 3 numbers ( use nested if)*/
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    	float a,b,c;
    	system("clear");
    	printf("Enter three numbers\n");
    	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
    	if (a>=b)
   	 {
       	 if (a>=c)
          	  	printf("%f is the largest number\n",a);
       	 else
           		printf("%f is the largest number\n",c);
    	} 
   	else 
  	{
       	 if (b>=c)
            		printf("%f is the largest number\n",b);
        	 else
            		printf("%f is the largest number\n",c);
    	}

    	return 0;
}

