/*Program to generate the series 1, 2, 4 ,7, 11 ,16....n ( use while...read n)*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i=0,n,j=1;
	system("clear");
	printf("Enter the value of n\n");
	scanf("%d",&n);
	while(j<=n)
	{
		j=j+i;
		if(j>n)
			break;
		else	
			printf("%d,",j);
		i++;

	}
	printf("\n");
	return 0;
}
