/*Program to check whether the given coordinates form a triangle*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int x1,x2,x3,y1,y2,y3;
	float a,b,c;
	
	printf("Enter the coordinates x1,y1\n");
	scanf("%d",&x1);
	scanf("%d",&y1);
	printf("Enter the coordinates x2,y2\n");
	scanf("%d",&x2);
	scanf("%d",&y2);
	printf("Enter the coordinates x3,y3\n");
	scanf("%d",&x3);
	scanf("%d",&y3);
	a=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	b=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
	c=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
	if(((a+b)>c)&&((b+c)>a)&&((c+a)>b))
		printf("They form a triangle\n");
	else
		printf("They do not form a triangle\n");
	return 0;
}			
	
