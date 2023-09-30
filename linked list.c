#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *addr;
}*start;

void create(int);
void display();
void insertFirst(int);
void insertMiddle(int, int);
void deleteFirst();
void deleteMiddle(int);
void search(int,int);


int main()
{
	start=NULL;
	int n, ch, loc;
	do
	{
		printf("\n1-To create\n2-To display\n3-To insert at first location\n4-To insert at middle\n5-To delete first\n6-To delete middle\n7-To search");
		printf("\nEnter your choice.");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter any number :");
		        scanf("%d",&n);
				create(n);
				display();
				break;
				
			case 2:
				display();
			    break;
				
			case 3:
				printf("\nEnter any number :");
		        scanf("%d",&n);
				insertFirst(n);
				display();
			    break;
			    
			case 4:
				printf("\nEnter number and location to insert.");
				scanf("%d%d",&n,&loc);
				insertMiddle(n, loc);
				display(); 
			    break;
				
			case 5:
				deleteFirst();
				display();
			    break;
				
			case 6:
				printf("\nEnter location of element you want to delete.");
				scanf("%d",&loc);
				deleteMiddle(loc);
				display();
			    break;
				
			case 7:
				printf("\nEnter element and its location you want to search");
				scanf("%d%d",&n,&loc);
				search(n, loc);
			    break;			    
						
		}
		printf("\nTo continue press 1.");
		scanf("%d",&ch);
	}while(ch==1);
	printf("-----------THANKYOU-----------");
	return 0;
}

void create(int n)
{
	struct Node *newnode,*curr;
	newnode=malloc(sizeof(struct Node));
	newnode->data=n;
	newnode->addr=NULL;
	if(start==NULL)
	{
		start=newnode;
	}
	else
	{
		curr=start;
		while(curr->addr!=NULL)
		{
			curr=curr->addr;
		}
		curr->addr=newnode;
	}
}

void display()
{
	struct Node *curr;
	if(start==NULL)
	{
		printf("\nLinked list is empty");
	}
	else
	{
		curr=start;
		printf("\n");
		while(curr!=NULL)
		{
			printf("|%d |%u |-->",curr->data,curr->addr);
			curr=curr->addr;
		}
	}
}

void insertFirst(int n)
{
	struct Node *newnode;
	newnode=malloc(sizeof(struct Node));
	newnode->data=n;
	newnode->addr=start;
	start=newnode;
	printf("\nNode inserted at first location");
}

void insertMiddle(int n,int loc)
{
	struct Node *newnode,*curr;
	int cnt=1;
	curr=start;
	while(cnt<loc-1)
	{
		curr=curr->addr;
		cnt++;
	}
	newnode=malloc(sizeof(struct Node));
	newnode->data=n;
	newnode->addr=curr->addr;
	curr->addr=newnode;
	printf("\nNode inserted.");
}

void deleteFirst()
{
	struct Node *temp;
	temp=start;
	start=start->addr;
	temp->addr=NULL;
	free(temp);
	printf("\nFirst Node deleted.");
}

void deleteMiddle(int loc)
{
	int cnt=1;
	struct Node *temp,*curr;
	curr=start;
	while(cnt<loc-1)
	{
		curr=curr->addr;
		cnt++;
	}
	temp=curr->addr;
	curr->addr=temp->addr;
	temp->addr=NULL;
	free(temp);
}

void search(int n, int loc)
{
	struct Node *newnode,*curr;
	int cnt=1;
	curr=start;
	while(cnt<loc-1)
	{
		curr=curr->addr;
		cnt++;
	}
}

