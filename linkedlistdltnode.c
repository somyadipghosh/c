#include<stdio.h>
struct node{
	int val;
	struct node *next;
};
struct node *head=NULL;
struct node *last=NULL;


void createanadinsertnode(){
	struct node *new;
	new=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter Value to the item:");
	scanf("%d",&new->val);
	new->next=NULL;

	if(head==NULL){
		head=new;
		last=new;
	}
	else
	{
		last->next=new;
		last=new;
	}
	printf("\nItem has been inserted....");
}

void display(){
 struct node *temp;
 temp=head;
 if(temp==NULL){
 	printf("\n List is empty");
 	return;
 }
 while(temp!=NULL){
 	printf("\n%d",temp->val);
 	temp=temp->next;//shift temp to next node
 }

}


void createandinsertnodeatbeg(){
	struct node *new;
	new=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter Value to the item:");
	scanf("%d",&new->val);
	new->next=NULL;
	if(head==NULL){
		head=new;
		last=new;
	}
	else{
		new->next=head;
		head=new;	
	}
}
void createnodeatparticularpost(int val){
	struct node *temp;
	//creating node//
	struct node *new;
	new=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter Value to the item:");
	scanf("%d",&new->val);
	new->next=NULL;
	
	temp=head;
	if(head==NULL){
		return;
	}
	else
	{
		while(temp!=NULL && temp->val!=val){
			temp=temp->next;
		}
		if(temp==NULL){
			printf("\nValue does not exist");
			return;
		}
		new->next=temp->next;
		temp->next=new;
		printf("\nItem has been inserted....");	
	}
}
void delfrombeg(){
	struct node *temp;
	if(head!=NULL)
	{
		temp=head;
		head=head->next;
		temp->next=NULL;
		free(temp);	
		printf("\nFirst node has been deleted");
	}
	else
	{
		printf("\nList is empty");
	}
	
}

void delfromlast()
{
	struct node *secondlastnode,*lastnode;
	if(head==NULL){
		printf("\nList is empty");
	}
	else if(head->next==NULL){
		free(head);
	}
	else{
		lastnode=head;
	while(lastnode->next!=NULL){
		secondlastnode=lastnode;
		lastnode=lastnode->next;
	}
	secondlastnode->next=NULL;
	free(lastnode);
	printf("\nLast node deleted");
	}
	

}
int main(){
	int i;
	display();
	for(i=1;i<=5;i++){
		createanadinsertnode();
	}
	//createandinsertnodeatbeg();
	display();
	//createnodeatparticularpost(70);
	delfrombeg();
	display();
	delfromlast();
	display();
	return 1;
}