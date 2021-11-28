/*Program to insert a word before a particular word.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,n,l1,l2,s,o,t=0;
    char str[1000],sub[1000],c[1000],x;
    system("clear");
    printf("Enter the string\n");
    scanf("%[^\n]",str);
    l1=strlen(str);
    printf("Enter the word to be entered\n");
    scanf("%s",sub);
    l2=strlen(sub);
    sub[l2]=' ';
    l2++;
    printf("Enter the position no: where the word should be entered\n");
    scanf("%d",&n);
    n--;
    i=0;
    while(i<=l1)
    {
        c[i]=str[i];
        i++;
    }
    s=l2+l1;
    o=n+l2;
    for(i=n;i<s;i++)
    {
        x=c[i];
        if(t<l2)
        {
            str[i]=sub[t];
            t=t+1;
        }
        str[o]=x;
        o=o+1;
    }
    printf("%s\n",str);
    return 0;
}