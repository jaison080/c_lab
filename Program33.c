/*Program to read a character.If it is 'P' print Python.If it is 'J' print java.Print invalid character if it is any other character*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char a;
	system("clear");
	printf("Enter  a character\n");
	scanf("%c",&a);
	switch(a)
	{
		case 'P':
		{
			printf("Python\n");
			break;
		}
		case 'J':
		{
			printf("Java\n");
			break;
		}
		default:
			printf("Invalid character\n");
	}
	return 0;
}			
		
			
