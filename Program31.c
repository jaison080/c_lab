/*Program to print the month name corresponds to the month number and also print the number of days*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	system("clear");
	printf("Enter the month number\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		{
			printf("January\n");
			printf("31 days\n");
			break;
		}	
		case 2:
		{
			printf("February\n");
			printf("28 days\n");
			break;
		}
		case 3:
		{
			printf("March\n");
			printf("31 days\n");
			break;
		}
		case 4:
		{
			printf("April\n");
			printf("30 days\n");
			break;
		}
		case 5:
		{
			printf("May\n");
			printf("31 days\n");
			break;
		}
		case 6:
		{
			printf("June\n");
			printf("30 days\n");
			break;
		}
		case 7:
		{
			printf("July\n");
			printf("31 days\n");
			break;
		}
		case 8:
		{
			printf("August\n");
			printf("31 days\n");
			break;
		}
		case 9:
		{
			printf("September\n");
			printf("30 days\n");
			break;
		}
		case 10:
		{
			printf("October\n");
			printf("31 days\n");
			break;
		}
		case 11:
		{
			printf("November\n");
			printf("30 days\n");
			break;
		}
		case 12:
		{
			printf("December\n");
			printf("31 days\n");
			break;
		}
		default:
			printf("Not a valid month number\n");
	}
	return 0;
}			
