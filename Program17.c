/*Program to check whether the given 3 sides form a triangle*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	float a,b,c;
	system("clear");
	printf("Enter three sides of a triangle\n");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	if(((a+b)>c)&&((b+c)>a)&&((c+a)>b))
		printf("The given sides form a triangle\n");
	else
		printf("The given sides do not form a triangle\n");
	return 0;
}			
