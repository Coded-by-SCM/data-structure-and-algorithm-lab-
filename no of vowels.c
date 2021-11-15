//write a program to count no ov vowels in string.
//write a program to reverse of 3 digit no.

#include<stdio.h>
#include<string.h>

int main()
{
	int c, b=0;
	char s[20];

printf("enter the string:");
gets(s);

for(c=0;c<20;c++){if(s[c]=='a'||s[c]=='e'||s[c]=='o'||s[c]=='i'||s[c]=='u'||s[c]=='A'||s[c]=='E'||s[c]=='O'||s[c]=='I'||s[c]=='U')
{b++;
}
}
printf("no of vovewls %d",b);
return 0;
}
