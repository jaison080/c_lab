/*Program to check whether a given year is Leap Year or not*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int year;
	system("clear");
	printf("Enter a year\n");
	scanf("%d",&year);
	if((year % 400) && (year % 4 == 0) && (year % 100!= 0))
		printf("Leap year\n");
	else
		printf("Not a leap year\n");
	return 0;
}			
