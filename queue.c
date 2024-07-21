#include<stdio.h>
int front=-1;
int rear=-1;
int queue[5];

void push()
{
	int val;
	printf("\nEnter value:");
	scanf("%d",&val);
	//check queue is full//
	if(rear==4){
		printf("\nOverflow");
		return;
	}
	else
	{
		//check queue is empty//
		if(front==-1 && rear==-1){
			front++;
			rear++;
			queue[rear]=val;
			printf("\nItem has been pushed into queue\n");
		}
		else
		{
			rear++;
			queue[rear]=val;
			printf("\nItem has been pushed into queue\n");
		}
	}

}
void disp()
{
	int i;
	if(front==-1 && rear==-1)
	{
		printf("\nNo item exist in queue:");
	}
	else
	{
		for(i=front;i<=rear;i++){
			printf("\n%d",queue[i]);
		}
	}
}
void pop()
{
	if(front==-1 && rear==-1){
        printf("queue is empty");
    }
    else if(front==rear){
      front=rear=-1;
    }
    else{
        front++;
    }
	printf("\nItem has been popped.");
}
int main()
{
	int c,x=1;
	do
	{
	printf("\n1.PUSH\n2.POP\n3.Display\n");
	scanf("%d",&c);
	switch(c)
		{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			disp();
			break;
		default:
			printf("\n Invalid Choice:");
			break;
		}
	printf("\nPress 1 to continue or else press any for exit:");
	scanf("%d",&x);	
	}while(x==1);
	
	return 1;
}