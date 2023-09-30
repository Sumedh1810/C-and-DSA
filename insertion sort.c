#include<stdio.h>
#define max 50

int main()
{
	int i, j, n, temp;
	int arr[max];
	printf("Enter no of elements:");
	scanf("%d",&n);
	
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	//sorting code
	i=1;
	while(i<n)
	{
		temp=arr[i];
		j=i-1;
		while(arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
			if(j==-1)
			{
				break;
			}
		};
		arr[j+1]=temp;
		i++;
	}
	
	printf("Sorted array is:");
	for(i=0;i<n;i++)
	{
		printf("%3d",arr[i]);
	}
	return 0;
}
