#include<stdio.h>
#include<stdlib.h>
void create();
struct node
{
	int data;
	struct node *next;
};
struct node *start,*curr;
void create()
{
	int data;
	struct node new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter Data:");
	scanf("%d", &new_node->data);
	new_node->next=NULL;
	if(start==NULL)
	{
		start=new_node;
		curr=start;
		curr->next=NULL;
	}
	else
	{
		curr->next=new_node;
		curr=new_node;
	}

	
}
void main()
{
	int choice;
	printf("Enter choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:	{
				create();
				break;
			}
		
		default: {
				 printf("Enter Correct Option...");
				 break;
			 }	 

	}
}
