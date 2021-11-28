/*Program to check whether the given number is even or odd*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int b;
	system("clear");
	printf("Enter a number\n");
	scanf("%d",&b);
	if(b%2==0)
		printf("Even number\n");
	else
		printf("Odd number\n");
	return 0;
}			
