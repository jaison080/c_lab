/*Program to calculate determinant of a 3 x 3 matrix.*/
#include<stdio.h>‌ ‌
#include<stdlib.h>
int‌ ‌main()
{‌ ‌
	‌int‌ ‌i,j,a[20][20],det;‌ ‌
	system(“clear”);
	‌for(i=0;i<3;i++)
	{‌ ‌
		‌for(j=0;j<3;j++)
		{‌ ‌
			‌printf("Enter‌ ‌the‌ ‌element\n ‌");‌ ‌
			‌scanf("%d",&a[i][j]);‌ ‌
		‌}‌ ‌
	‌}‌ ‌
	‌for(i=0;i<3;i++)
	{‌ ‌
‌		for(j=0;j<3;j++)
			‌printf("%d\t",a[i][j]);‌ ‌
		‌printf("\n");‌ ‌
‌	}‌ ‌
‌
	det=a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])-a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0])+   		a[0][2]‌*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);‌ ‌
‌	printf("Determinant:‌ ‌");‌ ‌
‌	printf("%d\n",det);‌ ‌
	return 0;
}‌
