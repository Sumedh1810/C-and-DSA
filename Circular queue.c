#include<stdio.h>
#define n 5

void insert();
void display();

int num,ch;
	int arr[n];
    int front=0,rear=-1;
int main()
{
	
	
	do
	{
	printf("\n1-To insert\n2-To display");
    printf("\nEnter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
    	case 1:
    		insert();
    	break;
		
		case 2:
			display();
		break;	
	}
	printf("\nTo continue press 1.");
	scanf("%d",&ch); 
    }while(ch==1);
    return 0;
}

void insert()
{
	printf("Enter element to insert in queue.");
	scanf("%d",&num);
	if((rear=n-1) && (front==1) || (front=rear+1))
	{
		printf("\nQueue is full");
	}
	else
	{
		if((rear==n-1) && (front!=0))
		{
			rear=0;
		}
		arr[rear]=num;
		rear++;
	}
}

void display()
{
	for(i=front;i<n;i++)
	{
		printf("%d",arr[front]);
	}
}
