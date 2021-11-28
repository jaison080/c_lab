/*A library database maintains following details of the book  (bookid,name,author name,number of copies).Write a program to display the book details in the descending order of the number of copies available(university question)*/
#include <stdio.h>
struct library
{
  	int bookid;
 	char name[50];
  	char author[50];
  	int nc;
}
book[100],t;
int main()
{
	int n,i,j;
	printf("Enter no of books:");
	scanf("%d",&n);
	printf("Enter the book details.bookid name author number of copies.\n");
	for(i=0;i<n;i++)
		scanf("%d %s %s %d",&book[i].bookid,book[i].name,book[i].author,&book[i].nc);
	//sorting the book details in decending order according to number of copies
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
 			if(book[i].nc<book[j].nc)
    			{
      	 			t=book[i];
       				book[i]=book[j];
       				book[j]=t;
   	 		}
	//printing the booklist
	printf("Book-id bookname  author  numberofcopies\n");
	for( i=0;i<n;i++)
		printf("%-8d %-10s%-10s%5d\n",book[i].bookid,book[i].name,book[i].author,book[i].nc);
}
