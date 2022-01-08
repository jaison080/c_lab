/*Program to read a word and print the characters in alphabetical order.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[40],t;
    int i,j;
    system("clear");
    printf("Enter the String :- ");
    scanf("%[^\n]",str);
    for(i=0;str[i]!='\0';i++)
    {
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[i]>str[j])
            {
                t=str[i];
                str[i]=str[j];
                str[j]=t;
            }
        }
    }
    printf("The alphabet wise is:%s\n",str);
    return 0;
}