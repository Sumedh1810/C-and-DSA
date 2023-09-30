#include<stdio.h>
#include<stdlib.h>

struct node *make(int);
void create();
struct node
{
	int data;
	struct node *left,*right
}*root,*p,*q;

int main()
{
	int ch;
	do
	{
	
	printf("1-To create");
	printf("\nEnter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			create();
		break;	
	}
	printf("\nTo continue press 1.");
	scanf("%d",&ch);
    }while(ch==1);
}

struct node *make(int n)
{
	struct node *newnode;
	newnode=malloc(sizeof(struct node));
	newnode->data=n;
	newnode->left=newnode->right=NULL;
	return (newnode);
}

void create()
{
	int no;
	char conti;
	printf("\nEnter a number : ");
	scanf("%d",&no);
	root=make(no);
	while(conti=='y' || conti=='Y')
	{
		printf("\nEnter -1 to stop.");
		scanf("%d",&no);
		if(no == -1)
		{
		break;
	    }
		else
		{
			p=root;
			q=root;
			while(p->data!=no && q!=NULL)
			{
				p=q;
				if(no<p->data)
				{
					q=p->left;
				}
				else
				{
					q=p->right;
				}
			}
			if(no<p->data)
			{
				printf("\nLeft Branch of %d is %d ",p->data,no);
			}
			else
			{
				printf("\nRight Branch of %d is %d ",p->data,no);
			}	
		}
		printf("\nTo continue press y or Y.");
		scanf("%c",&conti);	
	}
}
