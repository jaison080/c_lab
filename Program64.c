/*Program to remove characters other than alphabet from a string*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int l,i,n;
    char str[1000];
    system("clear");
    printf("Enter a string\n");
    scanf("%[^\n]",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        n=(int)str[i];
        if((n>=65)&&(n<=90))
            printf("%c",str[i]);
        else if((n>=97)&&(n<=122))
            printf("%c",str[i]);    
    }
    printf("\n");
    return 0;
}