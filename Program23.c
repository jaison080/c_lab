/*Program to check the quadrant of a given point(x,y)*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x,y;
	system("clear");
	printf("Enter the x co-ordinate\n");
	scanf("%d",&x);
	printf("Enter the y co-ordinate\n");
	scanf("%d",&y);
	if(x>0&&y>0)
		printf("First quadrant\n");
	else if(x<0&&y>0)
		printf("Second quadrant\n");
	else if(x<0&&y<0)
		printf("Third quadrant\n");
	else if(x>0&&y<0)
		printf("Fourth quadrant\n");
	else
		printf("Origin\n");
	return 0;
}					
