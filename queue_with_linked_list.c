#include<stdio.h>
struct node
{
    int value;
    struct node *next;
};
struct node *top=NULL,*rear=NULL;

//insert item into queue//
void push()
{
    //create node//
    struct node *new;
    int x;
    new=(struct node *)malloc(sizeof(struct node));
    if(new==NULL){
        printf("\nOverflow");
        return;
    }
    printf("\nEnter Value:");
    scanf("%d",&x);
    //assiging value to the node//
    new->value=x;
    new->next=NULL;

    //insert node into queue//
    if(top==NULL && rear==NULL)
    {
        top=new;
        rear=new;
        printf("\nItem has been pushed into queue:");
    }
    else
    {
        rear->next=new;
        rear=new;
        printf("\nItem has been pushed into queue:");
    }
}

void display(){
    //write the code here//
    int i;
    if(top==NULL && rear==NULL)
    {
        printf("\nEmpty Queue");
    }
    else
    {
        for(i=top;i<=rear;i++)
        {
            printf("\n%d",new->value);
        }
    }
}

void pop(){
    struct node *tmp;
    if(top==NULL){
        printf("\nUnderFlow");
        return;
    }
    else{
        tmp=top;
        top=top->next;
        free(tmp);
        printf("\nItem has been popped out:");
    }
}
int main()
{
    int c,x=1;

    do
    {
    printf("\n1.push\n2.pop\n3.display");
    scanf("%d",&c);

        switch (c)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                printf("\n item has been popped");
                break;
            case 3:
                display();
                break;
            default:
                printf("\n Invalid Choice");
                break;
        } 
    printf("\nPress 1 to continue or else press any for exit:");
    scanf("%d",&x);
    }

    while(x==1);
    {
        return 0;
    }
}