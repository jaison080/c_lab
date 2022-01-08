/*Program to compare two numbers( a==b , a>b or b>a)*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	float a,b;
	system("clear");
	printf("Enter a\n");
	scanf("%f",&a);
	printf("Enter b\n");
	scanf("%f",&b);
	if(a>b)
		printf("a>b\n");
	else if(b>a)
		printf("b>a\n");
	else
		printf("a==b\n");
	return 0;
}				
