#include<stdio.h>
int main()
{
    
	char name[10];
	char *ptr;
	int i,l=0;
	printf("\nEnter your name:");
	scanf("%s",name);
	ptr=&name[0];
	
	for(i=0;*(ptr+i)!=0;i++)
	{
		l++;
		if((*(ptr+i)>=65) && (*(ptr+i)<=90))
		{
		    printf("%c",(*(ptr+i)+32));
		}
		else
		{
		    printf("%c",*(ptr+i));
		}
	}
	printf("\nLength of string is:%d",l);	
	
	return 0;
}
