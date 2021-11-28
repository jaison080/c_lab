/*Program to check whether the given number is odd or even*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,e;
	system("clear");
	printf("Enter the number\n");
	scanf("%d",&n);
	e=n%2;
	switch(e)
	{
		case 0:
		{
			printf("Even number\n");
			break;
		}	
		default:
			printf("Odd number\n");
	}
	return 0;
}			

