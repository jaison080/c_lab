/*Program to check whether a given alphabet is a capital or small letter*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char a;
	int n;
	system("clear");
	printf("Enter an alphabet\n");
	scanf("%c",&a);
	n=(int)a;
	if(n>=65&&n<=90)
		printf("Capital letter\n");
	else
		printf("Small letter\n");
	return 0;
}	
