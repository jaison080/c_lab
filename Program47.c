/*Program to print the pattern*/
/*  * * * * *
    * * * *
    * * *
    * *
    *    */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j;
	system("clear");
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
			printf("*");
		printf("\n");
	}
	printf("\n");
	return 0;
}			
