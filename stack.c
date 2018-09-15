#include<stdio.h>
#define MAX 20
int top=-1,stack[MAX];
void push(int ele);
void pop();
void show();

void push(int ele)
{
	if(top==MAX-1)
	{
		printf("\nStack Is Full");
	}
	else
	{
		top=top+1;
		stack[top]=ele;
		show();
	}
}

void pop()
{
	if(top==-1)
	{
		printf("\nStack Is Empty");
	}
	else
	{
		top=top-1;
		show();
	}
}

void show()
{
	int i;
	for(i=0;i<=top;i++)
	{
		printf("%d\t",stack[i]);
	}
}

void main()
{
	int choice, ele;
	
	do
	{
	
		printf("Enter Choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					printf("\nEnter Element To Push Into Stack:");
					scanf("%d",&ele);
					push(ele);
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
			default:
				{
					printf("\nEnter Valid Option");
					break;
				}	
		}
	}while(choice!=0);
}
