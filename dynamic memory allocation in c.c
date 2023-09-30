#include <stdio.h>

int main()
{
	/*int ch;
	int *p;
	
	do
	{
		p=malloc(sizeof(int));  
		printf("\nEnter any no.");
		scanf("%d",p);
		printf("\nYour no. is %d :",*p);
		
		printf("\nTo continue press 1.");
		scanf("%d",&ch);
	}while(ch==1);
	*/
	int x,i;
	int *n=&x;
	printf("How many no's do you want'");
	scanf("%d",&x);
	
	n=(int*)malloc(sizeof(int)*x);
	
	for(i=0;i<x;i++)
	{
		printf("Enter the number %d :",i+1);
		scanf("%d",*(n+i));
		n++;
	}
	
	printf("Numbers are:");
	for(i=0;i<x;i++)
	{
		printf("%d",*(n+i));
	}
	
	/*for(i=0;i<x;i++)
	{
		printf("test%3d",*(n));
		n++;
	}*/
	return 0;
}
