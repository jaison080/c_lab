/*Program to print the even numbers between 0 and 50 (use while)*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i=0;
	system("clear");
	while(i<=50)
	{
		if(i%2==0)
			printf("%d\n",i);
		i++;
	}
	return 0;
}		
