//6.2.1)  Write a Program in C to Perform Operations on Graph
#include<stdio.h>
void create();
void display();

void iedge(int t,int h);
void inode();
void dedge(int t,int h);
void dnode(int d);

int adj[10][10];
int n;
int main()
{
	int node,tail,head,action;
	char choice='y';

	create();
	display();
	while(1)
	{
		printf("\n\n1) Insert a node\n");
		printf("2) Insert an edge\n");
		printf("3) Delete a node\n");
		printf("4) Delete an edge\n");
		printf("5) Dispaly\n");
		printf("6) Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&action);

		switch(action)
		{
		 case 1:
			choice='y';
			while(choice=='y'||choice=='Y')
			{
				inode();
				printf("\t\t\t\t\t\t\t\tContinue to insert more nodes ? ");
				scanf(" %c",&choice);
			}
			display();
			break;
		 case 2:
			choice='y';
			while(choice=='y'||choice=='Y')
			{
				printf("\nEnter an edge to be inserted : ");
				scanf("%d %d",&tail,&head);
				iedge(tail,head);
				printf("\t\t\t\t\t\t\t\tContinue to insert more edges ? ");
				scanf(" %c",&choice);
			}
			display();
			break;
		 case 3:
			choice='y';
			while(choice=='y'||choice=='Y')
			{
				printf("\nEnter a node to be deleted : ");
				scanf("%d",&node);
				dnode(node);
				printf("\t\t\t\t\t\t\t\tContinue to delete more nodes ? ");
				scanf(" %c",&choice);
			}
			display();
			break;
		 case 4:
			choice='y';
			while(choice=='y'||choice=='Y')
			{
				printf("\nEnter an edge to be deleted : ");
				scanf("%d %d",&tail,&head);
				dedge(tail,head);
				printf("\t\t\t\t\t\t\t\tContinue to delete more edges ? ");
				scanf(" %c",&choice);
			}
			display();
			break;
		 case 5:
			display();
			break;
		 case 6:
			//exit();
			break;
		 }
	}
return 0;
}

void create()
{
	int i,j,edges,tail,head;
	printf("Enter number of nodes : ");
	scanf("%d",&n);
	edges=n*(n-1);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			adj[i][j]=0;
		}
	}
	printf("\nEnter -1 -1 to exit \n\n");
	for(i=1;i<=edges;i++)
	{
		printf("Edge %d : ",i);
		scanf("%d %d",&tail,&head);
		if(tail==-1&&head==-1)
			break;
		if(tail>n||head>n||tail<=0||head<=0)
		{
			printf("Invalid edge!\n");
			i--;
		}
		else
			adj[tail][head]=1;
	}
}

void display()
{
	int i,j;
	printf("\n");
	for(i=1;i<=n;i++)
	{
		printf("\t%d",i);
	}
	printf("\n---------------------------------\n");
	for(i=1;i<=n;i++)
	{
		printf("%d  |",i);
		for(j=1;j<=n;j++)
		{
			printf("\t%d",adj[i][j]);
		}
		printf("  |  \n");
	}
	getch();
}

void inode()        //insert new node by increasing size of 2d array
{
	int i;
	n++;
	printf("\nNode %d is inserted successfully\n",n);
	for(i=1;i<=n;i++)
	{
		adj[i][n]=0;
		adj[n][i]=0;
	}
}

void dnode(int d)     //delete the node from graph
{
	int i,j;
	if(n==0)
	{
		printf("Graph is empty\n");
		return;
	}
	if(d>n)
	{
		printf("Invalid Node\n");
		return;
	}
	for(i=d;i<=n-1;i++)
	{
		for(j=1;j<=n;j++)
		{
			adj[i][j]=adj[i+1][j];  //move rows upward
			adj[j][i]=adj[j][i+1];  //move columns left
		}
	}
	n--;
}

void iedge(int t,int h)        //insert or add link between 2 nodes
{
	if(t>n||h>n||t<=0||h<=0)
	{
		printf("Invalid edge!\n");
		return;
	}
	else
	{
		adj[t][h]=1;
	}
}

void dedge(int t,int h)        //delete or remove link between 2 nodes
{
	if(t>n||h>n||t<=0||h<=0||adj[t][h]==0)
	{
		printf("Invalid edge or doesnot exist\n");
		return;
	}
	else
	{
		adj[t][h]=0;
	}
}

/*
Output for the Program Given in 6.2.1

Enter number of nodes : 2

Enter -1 -1 to exit

Edge 1 : 1 2
Edge 2 : 2 1

	1	2
---------------------------------
1  |	0	1
2  |	1	0


1) Insert a node
2) Insert an edge
3) Delete a node
4) Delete an edge
5) Dispaly
6) Exit
Enter your choice : 1

Node 3 is inserted successfully
								Continue ? n


	1	2	3
---------------------------------
1  |	0	1	0  |
2  |	1	0	0  |
3  |	0	0 	0  |


1) Insert a node
2) Insert an edge
3) Delete a node
4) Delete an edge
5) Dispaly
6) Exit
Enter your choice : 2

Enter Edge to be inserted : 3 1

								Continue ? y

Enter Edge to be inserted : 3 2

								Continue ? n

	1	2	3
---------------------------------
1  |	0	1	0  |
2  |	1	0	0  |
3  |	1	1	0  |


1) Insert a node
2) Insert an edge
3) Delete a node
4) Delete an edge
5) Dispaly
6) Exit
Enter your choice : 4

Enter the edge to be deleted : 3 1

								Continue ? n

	1	2	3
---------------------------------
1  |	0	1	0  |
2  |	1	0	0  |
3  |	0	1 	0  |


1) Insert a node
2) Insert an edge
3) Delete a node
4) Delete an edge
5) Dispaly
6) Exit
Enter your choice : 3

Enter the node to be deleted : 3

								Continue ? n
	1	2
---------------------------------
1  |	0	1  |
2  |	1	0  |


1) Insert a node
2) Insert an edge
3) Delete a node
4) Delete an edge
5) Dispaly
6) Exit
Enter your choice : 6

*/
