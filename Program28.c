/*Program to check whether a number is divisible by 3 and 5*/
#include <stdio.h> 
#include <stdlib.h>
int main()
{
	int n;
	system("clear");
	printf("Enter a number\n");
	scanf("%d",&n);
	if((n%3==0)&&(n%5==0))
		printf("Number is divisible by 3 and 5\n");
	else if((n%3==0)&&(n%5!=0))
		printf("Number is divisible by 3 only\n");
	else if((n%3!=0)&&(n%5==0))
		printf("Number is divisible by 5 only\n");
	else
		printf("Number is not divisible by 3 and 5\n");
	return 0;
}					              
