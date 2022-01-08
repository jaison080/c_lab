/*Program to add a string to the end of another string with out using library function.(concatenation-uq)*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,j;
    char str1[1000],str2[1000];
    system("clear");
    printf("Enter the first string\n");
    scanf("%[^\n]",str1);
    printf("Enter the second string\n");
    scanf("%s",str2);
    for (i = 0; str1[i] != '\0'; ++i);
    for (j = 0; str2[j] != '\0'; ++j, ++i) 
    {
        str1[i] = str2[j];
    }
    str1[i] = '\0';
    printf("After Concatenation Of Two String: ");
    printf("%s\n",str1);
    return 0;
}