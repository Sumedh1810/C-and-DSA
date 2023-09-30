#include<stdio.h>
#include<conio.h>
#define M (node*)malloc(sizeof(node))

typedef struct node
{
	int data;
	struct node *nxt;
}node;

void main()
{
	node *top=NULL,*newnode,*temp;
	int choice,elt;
	do
	{
		printf("1-Push\n2-Pop\n3-Display");
		printf("\nEnter your choice :");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("\nEnter element to push");
				scanf("%d",&elt);
				if(top==NULL)
				{
					top=M;
					top->data=elt;
					top->nxt=NULL;
				}
				else
				{
					newnode=M;
					newnode->data=elt;
					newnode->nxt=top;
					top=newnode;
				}
				printf("%d pushed into stack.",elt);
			break;
			
			case 2:
				if(top==NULL)
				{
					printf("\nStack is empty.");
				}
				else
				{
					elt=top->data;
					temp=top;
					top=top->nxt;
					free(temp);
					printf("%d popped from stack.",elt);
				}
			break;
			
			case 3:
				if(top==NULL)
				{
					printf("\nStack is empty.");
				}
				else
				{
					printf("\n Stack :");
					while(top->nxt!=NULL)
					{
						printf("%2d",top->data);
						top=top->nxt;
					}
				}
			break;	
		}
		printf("\nTo continue press 1.");
		scanf("%d",&choice);	
	}while(choice==1);
}
