#include<stdio.h>
#define max 50
int main()
{
	int n,i;
	int arr[max];
	int *ptr=&arr[0];
	
	printf("Enter number of elements in array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element %d :",i+1);
		scanf("%d",ptr+i);		
	}
	
	printf("Elements in array are:");
	for(i=0;i<n;i++)
	{
		printf("%d",*(ptr+i));
		printf("\n");
	}
	return 0;
}
