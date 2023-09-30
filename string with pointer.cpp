#include<stdio.h>
int main()
{
	char name[10]
	int *ptr=&name;
	int i,l=0;
	printf("\nEnter your name:");
	scanf("%s",name);
	ptr=&name[0];
	
	for(i=0;*(ptr+i)!=0;i++)
	{
		l++
	}
	printf("Length of string is:%d",l)
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
