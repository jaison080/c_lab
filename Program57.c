/*Program to check whether a given matrix is an identity matrix.*/
#include <stdio.h>‌ ‌
#include <stdlib.h>
int‌ ‌main(void)
{‌ ‌
	int‌ ‌n,i,j,a[20][20],flag=0;‌ ‌
	system(“clear”);
	printf("Enter‌ ‌the‌ ‌size‌ ‌of‌ ‌2d‌ ‌matrix\n");‌ ‌
	scanf("%d",&n);‌ ‌
	for(i=0;i<n;i++)
	{‌ ‌
		for(j=0;j<n;j++)
		{‌ ‌
			printf("Enter‌ ‌the‌ ‌element\n");‌ ‌
			scanf("%d",&a[i][j]);‌ ‌
		}
	}
	for(i=0;i<n;i++)
	{‌ ‌
		for(j=0;j<n;j++)
		{‌ ‌
			if(i==j)
			{‌ ‌
				if(a[i][j]!=1)
				{‌ ‌
					flag=1;‌ ‌
				}‌ ‌
			}‌ ‌
		}‌ ‌
	}‌ ‌
	if(flag==0)
	{‌ ‌
		printf("The‌ ‌entered‌ ‌matrix‌ ‌is‌ ‌identity‌ ‌matrix\n");‌ ‌
	}‌ ‌
	else
	{‌ ‌
		printf("The‌ ‌matrix‌ ‌is‌ ‌not‌ ‌identity‌ ‌matrix\n");‌ ‌
	}‌ ‌
	return 0;
}
