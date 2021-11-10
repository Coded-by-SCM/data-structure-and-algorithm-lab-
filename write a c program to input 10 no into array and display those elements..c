//write a c program to input 10 no into array and display those elements.

#include<stdio.h>

int main(void)
{
 int a[10], i;


 printf("enter 10 numbers");
 for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);

}   
printf("array is");
 for(i=0;i<10;i++)
{
    printf("\t%d",a[i]);

} 
return 0;
}