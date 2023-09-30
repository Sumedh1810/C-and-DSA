#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *addrnxt;
	struct Node *addrprev;
}*start,*curr,*temp,*prev,*last;

struct Node* create(int);
void addNextnode(int);
void display();
int searchNode(int);
void insertFirst(int);
void insertMiddle(int,int);
int deleteFirst();
int deleteMiddle(int);

int main()
{
	int n,ch,flag,p,c;
	start=NULL;
	do
	{
	printf("\n1-For create\n2-Add next node\n3-To search\n4-To insert first\n5-To insert middle\n6-To delete first\n7-To delete middle\n8-Display");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\nEnter the data for node:");
			scanf("%d",&n);
			create(n);
			display();
		break;
		
		case 2:
			printf("Enter data for next node:");
			scanf("%d",&n);
			addNextnode(n);
			display();
		break;
		
		case 3:
			printf("\nEnter element to search:");
			scanf("%d",&n);
			flag=searchNode(n);
			if(flag>0)
			{
				printf("Element found at %d position",flag);
			}
			else
			{
				printf("\nElement not found.");
			}
		break;
		
		case 4:
			printf("\nEnter the data for node:");
			scanf("%d",&n);
			insertFirst(n);
			display();
		break;	
		
		case 5:
			printf("Enter data for node:");
			scanf("%d",&n);
			printf("\nEnter position:");
			scanf("%d",&p);
			insertMiddle(n,p);
			display();
		break;
		
		case 6:
			deleteFirst();
			printf("\nFirst node deleted for data %d",n);
			display();
		break;
		
		case 7:
			printf("\nEnter position:");
			scanf("%d",&p);
			deleteMiddle(p);
			printf("\nNode deleted for data %d",n);
			display();
		break;	
		
		case 8:
			display();
			break;
	}
	printf("\nTo continue press 1.");
	scanf("%d",&ch);
    }while(ch=1);
	return 0;
}

struct Node*create(int n)
{
	temp=malloc(sizeof(struct Node));
	temp->data=n;
	temp->addrprev=NULL;
	temp->addrprev=NULL;
	if(start=NULL)
	{
		start=temp;
		last=temp;
	}
	return temp;
}

void display()
{
	if(start=NULL)
	{
		printf("\nDoubly Linked list is empty.");
	}
	else
	{
		curr=start;
		while(curr!=NULL)
		{
			printf("| %u | %d | %u| --> ",curr->addrprev,curr->data,curr->addrnxt);
			curr=curr->addrnxt;
		}
	}
}

void addNextnode(int n)
{
	temp=create(n);
	last->addrnxt=temp;
	temp->addrprev=last;
	last=temp;	
}

int searchNode(int n)
{
	int cnt;
	int flag=0;
	if(start=NULL)
	{
		printf("\nDoubly Linked list is empty.");
	}
	else
	{
		curr=start;
		while(curr!=NULL)
		{
			cnt++;
			if(curr->data==n)
			{
				flag=cnt;
				break;
			}
			curr=curr->addrnxt;	
		}
	}
	return flag;
}

void insertFirst(int n)
{
	temp=create(n);
	temp->addrnxt=start;
	start->addrprev=temp;
	start=temp;
}

void insertMiddle(int n,int p)
{
	int c=1;
	curr=start;
	prev=NULL;
	while(c<p)
	{
		prev=curr;
		curr=curr->addrnxt;
		c++;
	}
	temp=create(n);
	prev->addrnxt=temp;
	temp->addrprev=prev;
	temp->addrnxt=curr;
	curr->addrprev=temp;
}

int deleteFirst()
{
	int n;
	temp=start;
	start=start->addrnxt;
	temp->addrnxt=NULL;
	start->addrprev=NULL;
	n=temp->data;
	free(temp);
	return n;
}

int deleteMiddle(int p)
{
	int cnt=1;
	int n;
	curr=start;
	prev=NULL;
	while(cnt<p)
	{
		prev=curr;
		curr=curr->addrnxt;
		cnt++;
	}
	prev->addrnxt=curr->addrnxt;
	curr->addrnxt->addrprev=prev;
	n=curr->data;
	free(curr);
	return n;
}
