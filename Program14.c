/*Program to read internal marks( out of 50) and external mark( out of 100) and print passed /failed in internal or external ( use KTU criteria..45%) or failed in both*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	float in,ex,perin,perex;
	system("clear");
	printf("Enter the internal marks out of 50\n");
	scanf("%f",&in);
	printf("Enter the external marks out of 100\n");
	scanf("%f",&ex);
	perin = in*2.0;
	perex = ex;
	if(perin<45&&perex<45)
		printf("Failed in both\n");
	else if(perin>=45&&perex>=45)
		printf("Passed in both\n");
	else if(perin>=45&&perex<45)
		printf("Passed in internal\nFailed in external\n");
	else
		printf("Passed in external\nFailed in internal\n");
	return 0;
}	
