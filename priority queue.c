#include<stdio.h>
void insert(int num ,int prio);
void display();
void del();

struct node
{
	int priority;
	int data;
	struct node *addrnxt;
}*front=NULL,*temp,*q,*ptr;

void main()
{	
	int ch,n,prio;
	do
	{
		printf("\n1-Insert\n2-Delete\n3-Display");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
while(ch==1)
{
	printf("\nEnter number and priority :");
	scanf("%d%d",&n,&prio);
	insert(n,prio);
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
		}
		printf("\nTo continue press 1.");
		scanf("%d",&ch);
	}while(ch==1);
}

void insert(int n, int prio)
{
	temp=malloc(sizeof(struct node));
	temp->data=n;
	temp->priority=prio;
	
	if(front==NULL || prio<front->priority)
	{
		temp->addrnxt=front;
		front=temp;
	}
	else
	{
		q=front;
		while(q->addrnxt!=NULL && q->addrnxt->priority<=prio)
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
		printf("Data \t Priority\n");
		while(ptr!=NULL)
		{
			printf("%d \t %d\n",ptr->data,ptr->priority);
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
