#include<stdio.h>
#include<stdlib.h>
#define max 50

void factorial();  //WITHOUT ARGUMENTS AND WITHOUT RETURN TYPE
int arrayAdd();    //WITHOUT ARGUMENTS AND WITH RETURN TYPE
void arraySort(int sort[max],int);   //WITH ARGUMENT AND WITHOUT RETURN TYPE
void factor();  //WITHOUT ARGUMENT AND WITHOUT RETURN TYPE
void power();  ////WITHOUT ARGUMENTS AND WITHOUT RETURN TYPE
void primeNumber(int n);  //WITH ARGUMENT WITHOUT RETURN TYPE

int main()
{
	int ch,sum,n,i,fact,c;
	int sort[max];
	
	do{
		printf("--------------------------------MENU--------------------------------");
		printf("\n1-For factorial\n2-For addition using array\n3-For sorting an array\n4-For factor\n5-For power\n6-For Prime Number");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				factorial();
				break;
			case 2:
				printf("Array addition is : %d",arrayAdd());    
			    break;
			case 3:
				printf("Enter number of elements to be sorted:");
				scanf("%d",&n);
				printf("Enter elememts:");
				for(i=0;i<n;i++)
				{
					scanf("%d",&sort[i]);
				}
				arraySort(sort,n);
			    break;
			case 4:
			 factor();
				break;
			case 5:
				power();
			    break;
			case 6:
				printf("Enter a number:");
				scanf("%d",&n);
			    primeNumber(n);
				break;			
		}
		
		printf("\nTo continue press 1.");
		scanf("%d",&ch);
	}while(ch==1);
	printf("------------------------------THANKYOU------------------------------");
		
	
	return 0;
}
  //START OF FACTORIAL       WITHOUT ARGUMENTS AND WITHOUT RETURN TYPE
void factorial()
{
	int i,n,result=1;
	printf("Enter number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		result=result*i;
	}
	printf("Factorial of %d is%d:",n,result);
}
//END OF FACTORIAL

//START OF ARRAY ADDITION   WITHOUT ARGUMENTS AND WITH RETURN TYPE
int arrayAdd()
{
	int arr[max],i,n,sum=0;
   
   printf("Enter number of elements in array:");
   scanf("%d",&n);
   
   printf("Enter array elements:");
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   
   for(i=0;i<n;i++)
   {
       sum=sum+arr[i];
   }
   return sum;       
}

//START OF ARRAY SORTING  WITH ARGUMENT AND WITHOUT RETURN TYPE
void arraySort(int sort[],int n)
{
	int i,j,temp;
for(i=0;i<n-1;i++)
    {
        for(j=(i+1);j<n;j++)
        {
            if(sort[i]>sort[j])
            {
                temp=sort[i];
                sort[i]=sort[j];
                sort[j]=temp;
            }
        }
    } 
    printf("Sorted array is:");
    for(i=0;i<n;i++)
    {
    	printf("%d",sort[i]);
	}
}

//START OF FACTOR WITH ARGUMENT AND WITHOUT RETURN TYPE
void factor()
{
	int i,n;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Factors are:");
	for(i=1;i<=n;i++)
	{
		if(n%i == 0)
		{
			printf("%2d",i);
		}
	}
 } 
 
void power()
{
	int b,p,result=1;
	printf("Enter the base:");
	scanf("%d",&b);
	printf("Enter power:");
	scanf("%d",&p);
	for(p;p>0;p--)
	{
		result=result*b;
	}
	printf("Answer is %d:",result);
 } 
 
void primeNumber(n)
{
	int i,m,flag=0;
	m=n/2;    
    for(i=2;i<=m;i++)    
    {    
        if(n%i==0)    
        {    
        printf("Number is not prime");    
        flag=1;    
        break;    
        }     
    }    
    if(flag==0)    
    printf("Number is prime");
}
