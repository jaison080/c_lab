/*Program to create a simple calculator( +,-,*,/).Read the operator and two numbers and do the operation based on the operation*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	float a,b;
	float r;
	char o;
	system("clear");
	printf("Enter + for addition, - for substraction, * for multiplication and / for division\n");
	scanf("%c",&o);
	printf("Enter two numbers\n");
	scanf("%f",&a);
	scanf("%f",&b);
	switch(o)
	{
		case '+':
		{
			r=a+b;
			printf("%f\n",r);
			break;
		}	
		case '-':
		{
			r=a-b;
			printf("%f\n",r);
			break;
		}	
		case '*':
		{
			r=a*b;
			printf("%f\n",r);
			break;
		}	
		case '/':
		{
			r=a/b;
			printf("%f\n",r);
			break;
		}	
		default:
			printf("Invalid operation\n");
	}
	return 0;
}			
