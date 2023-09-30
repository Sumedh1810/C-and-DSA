#include<stdio.h>
void insert(int n ,char c, int p, int s);
void display();
void del();

struct node
{
	int no;
	char name;
	int price;
	int sale;
	struct node *addrnxt;
}*front=NULL,*temp,*q,*ptr;

void main()
{	
	int ch,n,p,s,c;
	do
	{
		printf("\n1-Insert\n2-Delete\n3-Display\n4-Order");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:

while(ch==1)
{
	printf("\nEnter Food item No:");
	scanf("%d",&n);
	printf("\nEnter Food item Name:");
	scanf("%c",&c);
	printf("\nEnter Price:");
	scanf("%d",&p);
	printf("\nEnter Total sales:");
	scanf("%d",&s);
	insert(n,c,p,s);
	printf("\n");
	display();
	printf("\nTo continue press 1.");
	scanf("%d",&ch);
	
}				
			break;
			
			case 2:
				while(ch==1)
				{
					del();
					printf("\n");
					display();
					printf("\nTo continue press 1.");
	                scanf("%d",&ch);
				}
				getch();
			break;
			
			case 3:
				display();
			break;
			
			case 4:
				display();
			break;	
		}
		printf("\nTo continue press 1.");
		scanf("%d",&ch);
	}while(ch==1);
}

void insert(int n, char c, int p, int s)
{
	temp=malloc(sizeof(struct node));
	temp->no=n;
	temp->name=c;
	temp->price=p;
	temp->sale=s;
	
	if(front==NULL || s<front->sale)
	{
		temp->addrnxt=front;
		front=temp;
	}
	else
	{
		q=front;
		while(q->addrnxt!=NULL && q->addrnxt->sale<=s)
		{
			q=q->addrnxt;
		}
		temp->addrnxt=q->addrnxt;
		q->addrnxt=temp;
	}	
}

void display()
{
	ptr=front;
	if(front==NULL)
	{
		printf("\nQueue is empty.\n");
	}
	else
	{
		printf("Item No \t Name \t Price \t Sales\n");
		while(ptr!=NULL)
		{
			printf("%d \t %c \t%d \t%d \n",ptr->no,ptr->name,ptr->price,ptr->sale);
			ptr=ptr->addrnxt;
		}
	}	
}

void del()
{
	if(front==NULL)
	{
		printf("\nQueue is empty.\n");
	}
	else
	{
		temp=front;
		front=front->addrnxt;
		free(temp);
	}	
} 
