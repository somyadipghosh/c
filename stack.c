#include<stdio.h>
int top=-1;
int stk[5];
void push()
{
    int item;
    printf("\nEnter value:");
    scanf("%d",&item);
    if(top==4)
    {
        printf("\nOverflow:");
        return;
    }
    else
    {
        top++;
        stk[top]=item;
        printf("\nItem has been pushed into stack");
    }
}
void pop()
{
    if(top==-1)
    {
        printf("\nUnderflow:");
        return;
    }
    else
    {
        top--;
        printf("\nItem has been popped out from stack");
    }
}
void display()
{
    printf("\n.........stack........\n");
    int i;
    for(i=top;i>=0;i--)
    {
        printf("\n%d",stk[i]);
    }
}

int main()
{
    push();
    push();
    push();
    push();
    push();
    push();
    display();
    pop();
    display();
    return 0;
}