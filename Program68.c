/*Reading the admission number and name of N students and printing the roll list in the order of name.(university question)*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int N,i,j;
	struct stud
	{
 		int adno;
 		char name[50];
	}
	s[100],t;
	printf("enter no of students..N <100::");
	scanf("%d",&N);
	printf("Enter Admission no and Name of %d students\n",N);
	for(i=0;i<N;i++)
		scanf("%d %s",&s[i].adno,s[i].name);
	//sorting the list according to name
	for(i=0;i<N-1;i++)
		for(j=i+1;j<N;j++)
 			if(strcmp(s[i].name,s[j].name)>0)
   	 		{
       				t=s[i];
       				s[i]=s[j];
       				s[j]=t;
    			}
	//printing the roll list in the order of name
	printf("Name....Admission Number\n");
	for( i=0;i<N;i++)
		printf("%-20s%5d\n",s[i].name,s[i].adno);
}
