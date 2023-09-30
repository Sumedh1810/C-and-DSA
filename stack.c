#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int stack[SIZE],top=-1,elt,ch,i;
	do
	{
		printf("\n\n\n**MENU**\n");
		printf("\n1-Push");
		printf("\n2-Pop");
		printf("\n3-Display");
		printf("\n0-Exit");
		
		printf("\nPlease enter your choice: ");
		scanf("%d",&ch);
		
		switch(ch)
		{
		
		case 1:
		   printf("\nEnter element to be pushed: ");
		   scanf("%d",&elt);
		   if(top==SIZE-1)
		   {
		   	    printf("\nStack is Full");
		   }
		   else
		   {
		     stack[++top]=elt;
		     printf("%d pushed...",elt);
		   }
		break;
		
		case 2:
			if(top == -1)
			{
				printf("\nStack is Empty!");
			}
			else
			{
				printf("\n%d popped...",stack[top]);
				stack[top]=0;
				top--;
			}
		break;
		
		case 3:
			i=top;
			printf("\nstack: ");
			while(i!=-1)
			{
				printf("\t%d",stack[i]);
				i--;
			}
		break;
		
		case 0:
			printf("\nTHANK YOU");
		break;
		default:
		printf("\nPlease enter correct choice...");   	
		}
	}while(ch !=0);
	return 0;
}
