/*Program to search a key element in a given array (linear search)*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
  	int a[100],s,c,n;
  	system("clear");
  	printf("Enter number of elements in array\n");
  	scanf("%d", &n);
  	printf("Enter %d integer(s)\n", n);
	for (c=0;c<n;c++)
    		scanf("%d",&a[c]);
  	printf("Enter a number to search\n");
  	scanf("%d",&s);
  	for (c=0;c<n;c++)
  	{
    		if (a[c]==s)
    		{
      			printf("%d is present at location %d.\n",s,c+1);
      			break;
    		}
  	}
  	if (c == n)
    		printf("%d isn't present in the array.\n", s);
  	return 0;
}
