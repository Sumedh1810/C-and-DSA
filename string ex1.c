#include<stdio.h>
int main()
{
    
	char name[10];
	char *ptr;
	int i,l=0;
	printf("\nEnter your name:");
	scanf("%s",name);
	ptr=&name[0];
	printf("String in lower case is:");
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
	printf("\nString in reverse is:");
	for(i=l-1;i>=0;i--)
	{
	    printf("%c",*(ptr+i));
	}
	return 0;
}
