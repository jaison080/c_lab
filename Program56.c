/*Program to check whether the given matrix is symmetric.*/
#include<stdio.h>‌ ‌
#include<stdlib.h>
int main()
{‌ ‌
	int‌ ‌n,a[20][20],i,j,temp[20][20],flag=0;‌ ‌
	system(“clear”);
	printf("Enter‌ ‌the‌ ‌size‌ ‌of‌ ‌matrix\n");‌ ‌
	scanf("%d",&n);‌ ‌
	for(i=0;i<n;i++)
	{‌ ‌
		for(j=0;j<n;j++)
		{‌ ‌
			printf("Enter‌ ‌the‌ ‌element\n");‌ ‌
			scanf("%d",&a[i][j]);‌ ‌
		}‌ ‌
	}‌ ‌
	for(j=0;j<n;j++)
	{‌ ‌
		for(i=0;i<n;i++)
			temp[i][j]=a[j][i];‌ ‌
	}‌ ‌
	printf("Original‌ ‌matrix‌ ‌\n");‌ ‌
	for(i=0;i<n;i++)
	{‌ ‌
		for(j=0;j<n;j++)
			printf("%d\t",a[i][j]);‌ ‌
		printf("\n");‌ ‌
	}‌ ‌
	printf("Transposed‌ ‌matrix\n");‌ ‌
	for(i=0;i<n;i++)
	{‌ ‌
		for(j=0;j<n;j++)
			printf("%d\t",temp[i][j]);‌ ‌
		printf("\n");‌ ‌
	}‌ ‌
	for(i=0;i<n;i++)
	{‌ ‌
		for(j=0;j<n;j++)
		{‌ ‌
			if(temp[i][j]!=a[i][j])
				flag=1;‌ ‌
		}‌ ‌
	}‌ ‌
	if(flag==0)
		printf("Symmetric‌ ‌matrix!!\n");‌ ‌
	else
		printf("Unsymmetric‌ ‌matrix!!\n");‌ ‌
	return 0;
}
