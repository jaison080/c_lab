/*Program to find the biggest of 3 numbers*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	float a,b,c;
	printf("Enter three numbers\n");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	if((a>b)&&(a>c))
		printf("Biggest number :%f\n",a);
	if((b>a)&&(b>c))
		printf("Biggest number :%f\n",b);
	if((c>b)&&(c>a))
		printf("Biggest number :%f\n",c);	\
	return 0;
}

	
	
