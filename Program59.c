/*Program to accept a two dimensional matrix and display the row sum, column sum and diagonal sum of elements.*/
#include<stdio.h>‌ ‌
#include<stdlib.h>
int main()
{‌ ‌
	‌int‌ ‌n,a[20][20],i,j,rs=0,cs=0,ds=0;‌ ‌
	‌printf("Enter‌ ‌the‌ ‌size‌ ‌of‌ ‌matrix\n");‌ ‌
	‌scanf("%d",&n);‌ ‌
	‌for(i=0;i<n;i++)
	{‌ ‌
		‌for(j=0;j<n;j++)
		{‌ ‌
			‌printf("Enter‌ ‌the‌ ‌element\n");‌ ‌
			‌scanf("%d",&a[i][j]);‌ ‌
		‌}‌ ‌
	‌}‌ ‌
	‌for(i=0;i<n;i++)
	{‌ ‌
		‌for(j=0;j<n;j++)
		{‌ ‌
			‌if(i==j)
				‌ds+=a[i][j];‌ ‌ ‌
		‌}‌ ‌
‌‌
	‌}‌ ‌
‌‌	‌printf("Sum‌ ‌of‌ ‌diagonal‌ ‌elements:‌ ‌");‌ ‌
	‌printf("%d\n",ds);‌ ‌
	‌for(i=0;i<n;i++)
	{‌ ‌
		‌for(j=0;j<n;j++)
			rs+=a[i][j];‌ ‌
‌		printf("Row‌ ‌%d‌ ‌sum:‌ ‌%d\n",i+1,rs);‌ ‌
	‌}‌ ‌
	‌for(j=0;j<n;j++)
	{‌ ‌
		‌for(i=0;i<n;i++)
			‌cs+=a[i][j];‌ ‌
		‌printf("Column‌ ‌%d‌ ‌sum:‌ ‌%d\n",j+1,cs);‌ ‌
	‌}‌ ‌
	return 0;
}‌
