/*Area of the circle given center point (x1,y1) and one point on the perimeter (x2,y2)*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int x1,x2,y1,y2,x,y;
	float area,r2;
	system("clear");
	printf("Enter the centre point in the order x1 and y1\n");
	scanf("%i",&x1);
	scanf("%i",&y1);
	printf("Enter one point on the perimeter in the order x2 and y2\n");
	scanf("%i",&x2);
	scanf("%i",&y2);
	x = x2-x1;
	y = y2-y1;
	r2 = (pow(x,2)+pow(y,2));
	area = M_PI*r2;
	printf("Area - %f\n",area);
	return 0;
}
