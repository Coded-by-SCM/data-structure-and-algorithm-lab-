//write a c program to insert and delete elements from array. and display array elements.
//delete array
#include<stdio.h>

int main(void)
{
 int a[10], i, p;


 printf("enter 6 numbers");
 for(i=0;i<6;i++)
{
    scanf("%d",&a[i]);

}  
printf("position :");
scanf("%d",&p);




for(i=p-1;i<6;i++)
{
    a[i]=a[i+1];


}



printf("array is");
 for(i=0;i<5;i++)
{
    printf("\t%d",a[i]);

}
return 0;
}
