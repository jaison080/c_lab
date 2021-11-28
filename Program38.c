/*Program to print the odd numbers between 0 and 50 in the reverse order ( use while)*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i=50;
	system("clear");
	while(i!=0)
	{
		if((i%2)!=0)
			printf("%d\n",i);
		i--;
	}
	return 0;
}			
