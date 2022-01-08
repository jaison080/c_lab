/*Program to read a character and check for vowel*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char a;
	system("clear");
	printf("Enter a character\n");
	scanf("%c",&a);
	switch(a)
	{
		case 'a':
		{
			printf("Vowel\n");
			break;
		}	
		case 'e':
		{
			printf("Vowel\n");
			break;
		}	
		case 'i':
		{
			printf("Vowel\n");
			break;
		}	
		case 'o':
		{
			printf("Vowel\n");
			break;
		}	
		case 'u':
		{
			printf("Vowel\n");
			break;
		}
		default:
			printf("Not a vowel\n");
	}
	return  0;
}							
