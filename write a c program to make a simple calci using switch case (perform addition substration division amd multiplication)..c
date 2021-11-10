//write a c program to make a simple calci using switch case (perform addition substration division amd multiplication)

#include<stdio.h>
 int main(void)
 {
     int a, b, result;
     char op;
     
     printf("\nenter the operation:");
     scanf("%c",&op); 
     printf("enter a number 1:");
     scanf("%d",&a);
     printf("\nenter a number 2:");
     scanf("%d",&b);
    
switch(op)
{
    case 'a' :
    result =a+b;
    break;

    case 's' :
    result =a-b;
    break;
 
    case 'm' :
    result =a*b;
    break;

    case 'd' :
    result =a/b;
    break;
    
    default :
    printf("ERROR");

}

printf(" result : %d",result);
return 0;
 }
