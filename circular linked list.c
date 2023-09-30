#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *addr_nxt;
}*start,*newnode,*curr,*temp,*last;

void create(int);
void display();
void insertFirst(int);
void insertMiddle(int,int);
void deleteFirst();
void deleteMiddle(int);

int main()
{
	int n,ch,loc;
	do
	{
		printf("1-Create\n2-Display\n3-Insert at first\n4-Insert in middle\n5-Delete first\n6-Delete middle");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		
		
		switch(ch)
		{
			case 1:
				printf("\nEnter any number:");
				scanf("%d",&n);
				create(n);
				display();
			break;
			
			case 2:
				display();
			break;
			
			case 3:
				printf("\nEnter number to insert in first position:");
				scanf("%d",&n);
				insertFirst(n);
				display();
			break;
			
			case 4:
				printf("\nEnter number and location to add:");
				scanf("%d%d",&n,&loc);
				insertMiddle(n,loc);
				display();
			break;
			
			case 5:
				deleteFirst();
			break;
			
			case 6:
				printf("\nEnter location of element to delete:");
				scanf("%d",&loc);
				deleteMiddle(loc);
			break;	
		}
		printf("\nTo continue press 1.");
		scanf("%d",&ch);
	}while(ch==1);
	return 0;
}

void create(int n)
{
	newnode=malloc(sizeof(struct node));
	newnode->data=n;
	newnode->addr_nxt=last;
	if(last==NULL)
	{
		last=newnode;
		last->addr_nxt=last;
	}
	else
	{
		newnode->addr_nxt=last->addr_nxt;
		last->addr_nxt=newnode;
		last=newnode;
	}
}

void display()
{
	if(last==NULL)
	{
		printf("\nLinked list is empty.");
	}
	else
	{
		curr=last->addr_nxt;
		while(curr!=last)
		{
			printf("| %d | %u |--->",curr->data,curr->addr_nxt);
			curr=curr->addr_nxt;
		}
		printf("| %d | %u |--->",curr->data,curr->addr_nxt);
	}
}

void insertFirst(int n)
{
	newnode=malloc(sizeof(struct node));
	newnode->data=n;
	newnode->addr_nxt=last->addr_nxt;
	last->addr_nxt=newnode;
	printf("\nElement inserted at first position.");
}

void insertMiddle(int n,int loc)
{
	int cnt=1;
	curr=last->addr_nxt;
	while(cnt<loc-1)
	{
		curr=curr->addr_nxt;
		cnt++;
	}
	newnode=malloc(sizeof(struct node));
	newnode->data=n;
	newnode->addr_nxt=curr->addr_nxt;
	curr->addr_nxt=newnode;
	printf("\nElement added at location %d",loc);
}

void deleteFirst()
{
	temp=last->addr_nxt;
	last->addr_nxt=temp->addr_nxt;
	temp->addr_nxt=NULL;
	free(temp);
	printf("\nFirst element deleted.");
	
}

void deleteMiddle(int loc)
{
	int cnt=1;
	curr=last;
	while(cnt<loc)
	{
		curr=curr->addr_nxt;
		cnt++;
	}
	temp=curr->addr_nxt;
	curr->addr_nxt=temp->addr_nxt;
	temp->addr_nxt=NULL;
	free(temp);
	printf("\nElement Deleted.");
}
