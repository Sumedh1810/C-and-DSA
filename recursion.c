/*#include<stdio.h>
int factorial(int);
void main()
{
	int n;
	printf("\nEnter a number :");
	scanf("%d",&n);
	printf("\nThe factorial of %d is %d.",n,factorial(n));
}
int factorial(int n)
{
	if(n>1)
		return n*factorial(n-1);//function is calling itself
	else
		return 1;
}

/*2*1
//3*2!
//4*3!
  5*4!
*/
//------------------------------------------------------------------------------
/*
#include <stdio.h>
int fibonacci(int num)
{
    if (num==0)
    {
    	return 0;
    }
    else if(num==1)
    {
    	return 1;
	}
    else
    {
        return fibonacci(num - 1) + fibonacci(num - 2); 
    }
}

int main()
{
    int num,i;
    printf("Enter the number of elements to be in the series : ");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        printf("%d, ", fibonacci(i));
    }
    return 0;
}
*/
//------------------------------------------------------------------------------------------

#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter number of numbers to display :");
	scanf("%d",&n);
	fibonacci(n);
	return 0;
}

int fibonacci(int n)
{
	static int i=0,j=1,k;
	if(n>0)
	{
		k=i+j;
		i=j;
		j=k;
		printf("  %d",k);
		fibonacci(n-1);
	}
}
