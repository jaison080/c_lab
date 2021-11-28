/*Program to check the type of a triangle after reading the three vertices ( scalene, isosceles, equilateral)*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	double x1,x2,x3,y1,y2,y3,a,b,c,A,B,C;
	printf("Enter the coordiantes of the vertices x and y respectively\n");
	scanf("%le%le",&x1,&y1);
	scanf("%le%le",&x2,&y2);
	scanf("%le%le",&x3,&y3);
	a=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	b=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
	c=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
	A=((pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c));
	B=((pow(a,2)+pow(c,2)-pow(b,2))/(2*a*c));
	C=((pow(b,2)+pow(a,2)-pow(c,2))/(2*b*a));
	if((a!=b)&&(b!=c))
		printf("Scalene triangle\n");
	if((a==b)&&(a!=c)||(b==c)&&(b!=a)||(c==a)&&(c!=b))
	{
		if(((A==B)&&(B!=C))||((B==C)&&(C!=A))||((A==c)&&(B!=A)))
			printf("Isoceles triangle\n");
	}
	if((a==b)&&(b==c))
	{
		if(A==B==C==0.5)
			printf("Equilateral triangle\n");
	}						
	return 0;
}	
