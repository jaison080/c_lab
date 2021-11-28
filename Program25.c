/*Program to determine whether or not the triangle is a right triangle*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	 int a,d,c,l,b,h;
	 system("clear");
	 printf("Enter the three sides of a triangle\n");
    	 scanf("%d",&a);
    	 scanf("%d",&d);
    	 scanf("%d",&c);
    	 if(((a+d)>c)&&((d+c)>a)&&((c+a)>d))
    	 {
   	 	if (a > d)
    	 	{
       	 	if (a > c)
        		{
          		 	l=c;
          		 	b=d;
          		 	h=a;
          		 	if(pow(h,2)==(pow(l,2)+pow(b,2)))
          		 		printf("Right angled triangle\n");
          		 	else
          		 		printf("Not a right angled triangle\n");
      			}
       		else
     	   		{
            			h=c;
            			l=a;
            			b=d;
            			if(pow(h,2)==(pow(l,2)+pow(b,2)))
          		 		printf("Right angled triangle\n");
          		 	else
          		 		printf("Not a right angled triangle\n");
            		}	
        	}
    		else if (d > c)
    		{
        		h=d;
        		l=a;
        		b=c;
        		if(pow(h,2)==(pow(l,2)+pow(b,2)))
          		 	printf("Right angled triangle\n");
          		else
          		 	printf("Not a right angled triangle\n");
        	}	  	
    		else
    		{
        		h=c;
        		l=a;
        		b=d;
        		if(pow(h,2)==(pow(l,2)+pow(b,2)))
          		 	printf("Right angled triangle\n");
          		else
          		 	printf("Not a right angled triangle\n");
        	}
	} 
	else
		printf("Not a triangle\n");
	return 0;	
}
