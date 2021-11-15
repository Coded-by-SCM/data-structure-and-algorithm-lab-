//write a program to reverse of 3 digit no.

#include<stdio.h>

int main()
{
	int n, rev=0, rem;
	
	printf("enter the num:");
    scanf("%d",&n);
while(n!=0)
{
	rem=n%10;
	rev=rev*10+rem;
	n/=10;
}
	printf("the num is: %d",rev);
	return 0;
}

