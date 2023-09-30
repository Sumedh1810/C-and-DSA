#include<stdio.h>
#include<stdlib.h>

struct Account
{
	int ano;
	char cname[10];
	float bal;
};

int main()
{
	int i,n,ch;
	int search,flag=0;
	float amt;
	
	
	printf("Enter the number for accounts :");
	scanf("%d",&n);
	struct Account acc[n];
	
	for(i=0;i<n;i++)
	{		
    printf("\n\nEnter details for Account%2d",i+1);
    printf("\nEnter Account No:");
	scanf("%d",&acc[i].ano);
	
	printf("Enter Customer Name:");
	scanf("%s",&acc[i].cname);
	
	printf("Enter Balance:");
	scanf("%f",&acc[i].bal);
	
    }	
    
    for(i=0;i<n;i++)
    {
    	printf("\n-------------------------");
	printf("Name is:%2s",acc[i].cname);
	printf("\nAccount No. is:%2d",acc[i].ano);
	printf("\nBalance is:%2f",acc[i].bal);
    	
	}
	
	printf("\nEnter the account number you want to check:");
	scanf("%d",&search);
	
	for(i=0;i<n;i++)
	{
		if(acc[i].ano==search)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("\nAccount Found.");
	}
	
	printf("\n1-To Deposit\n2-For Withdrawl");
	scanf("%d",&ch);
	
	if(ch==1)
	{
		printf("\nEnter the amount to deposit");
		scanf("%f",&amt);
		
		acc[i].bal=acc[i].bal+amt;
		printf("Account balance is: %f",acc[i].bal);
	}
	
    if(ch==2)
    {
    	printf("\nEnter the amount to withdrawl");
		scanf("%f",&amt);
		
		acc[i].bal=acc[i].bal-amt;
		printf("Account balance is: %f",acc[i].bal);
	}
	
	else
	{
		printf("\nAccount not found.");
	}
    
    return 0;	
}
