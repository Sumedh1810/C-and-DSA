#include<stdio.h>
#include<stdlib.h>

void create(int);
struct Node
{
	int data;
	struct Node *addr_next;
}*start,*newnode,*curr;

int main()
{
	int n,ch;
	start=NULL;
	do
	{
		printf("\nEnter any number:");
	    scanf("%d",&n);
		
		printf("\nTo continue press 1.");
		scanf("%d",&ch);
	}while(ch==1);
	
	create(n);
	display();
	
	return 0;
}

void create(int n)
{
	newnode=malloc(sizeof(struct Node));
	newnode->data=n;
	newnode->addr_next=NULL;
	if(start==NULL)
	{
		start=newnode;
	}
	else
	{
		curr=start;
		while(curr->addr_next!=NULL)
		{
			curr=curr->addr_next;
		}
		curr->addr_next=newnode;
		
	}
	
}

void display()
{
	if(start==NULL)
	{
		printf("\nlinked list is empty.");
	}
	else
	{
		curr=start;
		while(curr!=NULL)
		{
			printf("|%d|%u| ->",curr->data,curr->addr_next);
			curr=curr->addr_next;
		}
	}
}
