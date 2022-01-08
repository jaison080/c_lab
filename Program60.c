/*Program to read a sentence through keyboard and to display the count of white spaces in the given sentence.(uq)*/
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main()
{
    char str[1000];
    int i,count=0;
    system("clear");
    printf("Enter the string\n");
    scanf("%[^\n]", str);
    for(i=0;i<strlen(str);i++)
    {
            if(str[i]==' ')
                count++;
    } 
    printf("\nTotal number of spaces:%d\n",count);
    return 0;        
}