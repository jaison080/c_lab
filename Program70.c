/*Student data base store rno,name,gender and CGPA of students.Prepare a rank list .Also prepare a list of students with CGPA less than 7( university question).*/
#include <stdio.h>
struct student
{
  	int rno;
  	char name[50];
  	char gender[10];
  	float cgpa;
}
stud[100],t;
int main()
{
	int n,i,j;
	printf("Enter no of students:");
	scanf("%d",&n);
	printf("Enter the students details rno name gender cgpa \n");
	for(i=0;i<n;i++)
	scanf("%d %s %s %f",&stud[i].rno,stud[i].name,stud[i].gender,&stud[i].cgpa);
	//sorting the stud details in decending order of cgpa
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
 			if(stud[i].cgpa<stud[j].cgpa)
    			{
      				 t=stud[i];
    				 stud[i]=stud[j];
       				 stud[j]=t;
    			}
	//printing the rank list
	printf("rno     name       gender      cgpa\n");
	printf("***********************************\n");
	for( i=0;i<n;i++)
		printf("%-8d %-10s%-10s%5f\n",stud[i].rno,stud[i].name,stud[i].gender,stud[i].cgpa);
	//list of students with cgpa less than 7
	printf("list of students with cgpa less than 7\n");
	for( i=0;i<n;i++)
		if(stud[i].cgpa<7)
		    printf("%-8d %-10s%-10s%5f\n",stud[i].rno,stud[i].name,stud[i].gender,stud[i].cgpa);
} 
