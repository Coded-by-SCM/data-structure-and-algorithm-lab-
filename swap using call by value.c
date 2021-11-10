#include<stdio.h>

void swap(int,int);

int main()
{
    int x,y;

    printf("enter the value of x & y");
    scanf ("%d%d", &x,&y);

    printf("before swaping x= %d, y= %d", x,y);
    swap(x,y);
    
 return 0;   
 }

 void swap(int a, int b)
 {
     int temp;
     temp=a;
     a=b;
     b= temp;
     
printf("after swaping x= %d, y= %d", a,b);
 }