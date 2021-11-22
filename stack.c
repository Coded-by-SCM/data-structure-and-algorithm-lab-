#include<stdio.h>
#include<conio.h>

int stack[100],i,ch=0,top=-1,SIZE;


void push()
{
    int val;
    if(top==SIZE-1)
    printf("\noverflow");
    else
    {
        printf("enter the value");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
    }
}

void pop()
{
    if(top==-1)
    printf("underflow");
    else
    {
        printf("deleted elemnt is %d", stack[top]);
        top=top-1;
    }
}

void show()
{
    if(top==-1)
    printf("stack is empty");
    else{
        for(i=top;i>=0;i--)
        {
            printf("\t%d",stack[i]);
           
        } printf("\n");
    }

}

void main()
{
    printf("enter the size");
    scanf("%d",&SIZE);
    printf("\nSTACK OPERATION\n");
    while(ch!=4)
    {
        printf("Chose one from the below options...\n");  
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");  
        printf("\n Enter your choice \n");        
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                show();
                break;
            
            }
            case 4:
            {
                printf("exiting...");
                break;
            }
            default:
            {
                printf("enter valid choice..."); 
            }
        }
    }

    



}

