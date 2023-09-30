#include <stdio.h>
int sortArray(int sort[],int);

int  main()
{
	int sort[100];
	int n, i;
	printf("Enter number of elements in array:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&sort[i]);
	}
	sortArray(sort,n);
	printf("Sorted array is:");
	for(i=0;i<n;i++)
	{
		printf("%2d",sort[i]);
	}
	
	return 0;
}

int sortArray(int sort[],int n)
{
	int i, j, temp;
	for(i=0;i<(n-1);i++)
	{
		for(j=0;j<n;j++)
		{
			if(sort[i]>sort[j])
			{
				temp=sort[i];
				sort[i]=sort[j];
				sort[j]=temp;
			}
		}
		return sort[i];
	}
 
}
