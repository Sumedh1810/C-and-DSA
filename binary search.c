#include<stdio.h>
#define max 50

int main()
{
	int i,e,n,lb,ub,mid;
	int arr[max];
	printf("Enter no of elements:");
	scanf("%d",&n);
    
    
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the element to be searched:");
    scanf("%d",&e)

    lb=0;
    ub=n;
    
    while(lb<n)
    {
    	mid=lb+ub/2;
    	if(e==mid)
    	{
    		printf("Element found");
		}
    	
    	if(e<=mid)
    	{
    		lb=0;
    		ub=mid;
    		mid=
    		if(e==mid)
    		{
    			printf("Element found");
			}
		}
		
		else if
	}
    
    
    
	
	
		
	return 0;
	
}
