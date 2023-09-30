#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *left, *right;
}*root,*p,*q;

struct node *make(int y)
{
	struct node *newnode;
	newnode=malloc(sizeof(struct node));
	newnode->data=y;
	newnode->left=newnode->right=NULL;
	return (newnode);
}
void left(struct node *r,int x)
{
	if(r->left!=NULL)
	printf("\nInvalid.");
    else
    {
	r->left=make(x);
    }
}
void right(struct node *r,int x)
{
	if(r->right!=NULL)
	printf("\nInvalid.");
	else
	{
		r->right=make(x);
	}
}
void inorder(struct node *r)
{
	if(r!=NULL)
	{
		inorder(r->left);
		printf("\t %d",r->data);
		inorder(r->right);
	}
}
void preorder(struct node *r)
{
	if(r!=NULL)
	{
		printf("\t %d",r->data);
		preorder(r->left);
		preorder(r->right);
	}
}
void postorder(struct node *r)
{
	if(r!=NULL)
	{
		postorder(r->left);
		postorder(r->right);
		printf("\t %d",r->data);
	}
}

void create()
{
	int no;
	int choice = 1;
	printf("\nEnter root:");
	scanf("%d",&no);
	root=make(no);
	
	while(choice == 1)
	{
		printf("\nEnter number -1 to stop.");
		scanf("%d",&no);
		if(no==-1)
	break;
		p=root;
		q=root;
		while(no!=p->data && q!=NULL)
		{
			p=q;
			if(no<p->data)
			q=p->left;
			else
			q=p->right;
		}
		if(no<p->data)
		{
			printf("\nLeft branch of %d is %d\n",p->data,no);
			left(p,no);
		}
		else
		{
			right(p,no);
			printf("\nRight branch of %d is %d\n",p->data,no);
		}
		printf("\nTo enter more nodes press 1.");
		scanf("%d",&choice);
	}
}
void deleteNodeleaf(int no)
{
	struct node *p,*q;
	p=root;
	q=root;
	while(q!=NULL && no!=q->data)
	{
		if(no<q->data)
		{
			p=q;
			q=p->left;
		}
		else if(no>q->data)
		{
			q=p->right;
		}
	}
	if(no<p->data)
	{
		p->left=NULL;
		free(q);
		printf("\n%d node deleted.",no);
	}
	else if(no>p->data)
	{
		p->right=NULL;
		free(q);
		printf("\n%d node deleted.",no);
	}
}

void deleteNodewc(int no)
{
	struct node *p,*q,*P,*temp;
	p=root;
	q=root;
	P=root;
	while(q!=NULL && no!=q->data)
	{
		if(no<q->data)
		{
			P=p=q;
			q=p->left;
		}
		else if(no>q->data)
		{
			q=p->right;
		}
	}
	while(q->right!=NULL)
	{
		p=q;
		q=p->right;
		temp=p;
		p=p->left;
		free(temp);
		P->left=q;
		q->left=p;
	}
	printf("\n%d node deleted.",no);
}

void main()
{
	int no,action;
	do
	{
		printf("\n1-Create\n2-Inorder\n3-Preorder\n4-Postorder\n5-Delete leaf node\n6-Delete node with 2 children\n7-Delete intermediate node");
		printf("\nEnter your choice :");
		scanf("%d",&action);
		switch(action)
		{
			case 1:
				create();
			break;
			
			case 2:
				printf("\t\tInorder Traversal\n\t\t");
				inorder(root);
			break;
			
			case 3:
				printf("\t\tPreorder Traversal\n\t\t");
				preorder(root);
			break;
			
			case 4:
				printf("\t\tPostorder Traversal\n\t\t");
				postorder(root);
			break;
			
			case 5:
				printf("\nEnter the data to delete :");
				scanf("%d",&no);
				deleteNodeleaf(no);
			break;
			
			case 6:
				printf("\nEnter the data to delete :");
				scanf("%d",&no);
				deleteNodewc(no);
			break;	
		}
		printf("\nTo display main menu press 1.");
		scanf("%d",&action);
	}while(action==1);
}
