/*Program to write a function to find factorial of a given number.*/
#include<stdio.h>
#include<stdlib.h>
int fact(int);
void main()
{
    int no,factorial;
    system("clear");
  	printf("Enter a number to calculate it's factorial\n");
  	scanf("%d",&no);
  	factorial=fact(no);
    printf("Factorial of the num(%d) = %d\n",no,factorial);

}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}