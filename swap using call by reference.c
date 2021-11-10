#include<stdio.h>

void swap(int *x,int *y);

int main()
{
    int x,y;

    printf("enter the value of x & y");
    scanf ("%d%d", &x,&y);

    printf("before swaping x= %d, y= %d", x,y);
    swap(&x,&y);
    
 return 0;   
 }

 void swap(int *x, int *y)
 {
     int temp;
     temp=*x;
     *x=*y;
     *y= temp;
     
printf("after swaping x= %d, y= %d", *x,*y);
 }