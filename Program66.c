/*Write functions to convert feet to inches and inches to centimeters. Write a program which will read feet and convert it into centimeters using the two functions.(uq)*/
#include<stdio.h>  
#include<stdlib.h>
int getinch(int);
int getcm(int);
int main()   
{  
    int feet;
    system("clear");
    printf("Enter the feet value: ");
    scanf("%d",&feet);  
    getinch(feet);
}  
int getinch(int fe)
{
    double Inch;  
    Inch = 12 * fe;  
    getcm(Inch);
    return 0; 
}
int getcm(int in)
{
    double centimeter;  
    centimeter = 2.54 * in;  
    printf ("Value in Centimeter is: %.2f \n", centimeter);   
    return 0;  
}