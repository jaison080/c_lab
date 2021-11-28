/*Program to count all the occurrence of a  particular word.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,j,l1,l2,count=0,chk,temp;
    char str[1000],sub[1000];
    system("clear");
    printf("Enter the string\n");
    scanf("%[^\n]",str);
    l1=strlen(str);
    printf("Enter the word to be searched\n");
    scanf("%s",sub);
    l2=strlen(sub);
    for(i=0;i<l1;i++)
    {
        temp=i;
        for(j=0;j<l2;j++)
        {
            if(str[i]==sub[j])
                i++;
        }
        chk=i-temp;
        if(chk==l2)
            count++;
        i=temp;    

    }
    printf("Occurence=%d\n",count);
    return 0;
}