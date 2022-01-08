/*Program to print the series 5,10,15,….,100 (using for loop)*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	system("clear");
	for(i=5;i<=100;i+=5)
		printf("%d,",i);
	printf("\n");	
	return 0;
}		
