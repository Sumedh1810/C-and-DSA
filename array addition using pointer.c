#include<stdio.h>
int main()
{
	int arr[5];
	int*ptr=&arr[0];
	int i, min=0, max=0, sum=0;
	
	printf("Enter any 5 numbers:");
	for(i=0;i<5;i++)
	{
		scanf("%d",ptr+i);
		sum=sum+*(ptr+i);
	}
	
	printf("Numbers in array:");
	for(i=0;i<5;i++)
	{
		printf("%d",*(ptr+i));
		printf("\n");
			
	}
	for(i=1;i<5;i++)
	{
	if(*(ptr+i)>max)
		{
			max=*(ptr+i);
			printf("\nMaximum value is:%d",max);
		}
		else if(*(ptr+i)<min)
		{
			min=*(ptr+i);
			printf("\nMinimum value is:%d",min);
		}
	}
		
	
	
	printf("\nNumbers in array in reverse order:");
	for(i=4;i>=0;i--)
	{
		printf("%d",*(ptr+i));
		printf("\n");
	}
	printf("\nAddition :%d",sum);
    return 0;
	
}
