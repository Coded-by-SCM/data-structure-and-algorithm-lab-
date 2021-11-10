//write a c program to insert and delete elements from array. and display array elements.
//insert array
#include<stdio.h>

int main(void)
{
 int a[10], i, p, n;


 printf("enter 6 numbers");
 for(i=0;i<6;i++)
{
    scanf("%d",&a[i]);

}  
printf("position :");
scanf("%d",&p);
printf("num :");
scanf("%d",&n);



for(i=6;i>p-1;i--)
{
    a[i+1]=a[i];


}

a[p-1]=n;

printf("array is");
 for(i=0;i<7;i++)
{
    printf("\t%d",a[i]);

}
return 0;
}
