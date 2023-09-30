#include<stdio.h>
#include<stdlib.h>
#define max 50

void createArray();
void displayArray();
void binarySearch();
void linearSearch();
void bubbleSort();
void selectionSort();
void insertionSort();

int main()
{
	int ch, i, n;
	int arr[max];
	
	do
	{
	printf("1-To create array\n2-To display array\n3-Search element in array\n4-Sort array");
	printf("\nEnter your choice");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			printf("Enter the number of elements in array");
			scanf("%d",&n);
			printf("Enter the array elements:");
			createArray(arr, n);
		    break;
		    
		case 2:
			displayArray(arr, n);
			break;
			
		case 3:
			printf("\n1-For binary Search\n2-For linear search");
			scanf("%d",&ch);
			if(ch==1)
			{
				binarySearch();
			}
			else if(ch==2)
			{
				linearSearch();
			}
		    break;
		
		case 4:
			printf("\n1-For Bubble Sort\n2-For Selection Sort\n3-For Insertion Sort");
			scanf("%d",&ch);
			if(ch==1)
			{
				bubbleSort(arr, n);
			}
			else if(ch==2)
			{
				selectionSort();
			}
			else if(ch==3)
			{
				insertionSort();
			}
			break;    			
	}
	printf("\nTo continue press 1.");
	scanf("%d",&ch);
}
while(ch==1);
printf("----THANKYOU----");

return 0;
}

createArray(int arr[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array is created.");
}

displayArray(int arr[], int n)
{
	int i;
	printf("Array is:");
	for(i=0;i<n;i++)
	{
		printf("%2d",arr[i]);
	}
}

binarySearch()
{
	printf("\nBinary Search");
}

linearSearch()
{
	printf("\nLinear Search");
}

bubbleSort(int arr[], int n)
{
	int i, j, temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n-i;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("Bubble Sort done.");
}

insertionSort()
{
	printf("\nInsertion Sort");
}

selectionSort()
{
	printf("\nSelection Sort");
}
