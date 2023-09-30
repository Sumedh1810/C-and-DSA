#include<stdio.h>
#include<stdlib.h>
int main()
{
	int flag=1;
	char str1[10], str2[10];
	int i,j,l=0,v=0,c=0;
	
	printf("\nEnter str1:");
	scanf("%s",&str1);
	
	/*pritf("\nEnter str 2:");
	scanf("%s",&str2);*/
	
	//length of first string
    for(i=0;str1[i]!='\0';i++);
    
		
	for(j=(j-1);i=0;i<j;i++;j--)
	{
		if(str1[i]!=str1[j])
		{
			flag=0;
			break;
		}
	}
	
	if(flag)
	{
		printf("\nString is pallendrome.");
	}
	else
	{
		printf("String is not a pallendrome.");
	}
	/*printf("\nLength is:%d",l);
	printf("\nName in reverse:");
	for(i=(l-1);i>=0;i--)
	{
		l--;
		printf("%c",str[i]);
	}
	
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u'))
		{
			v++;
		}
		else
		{
			c++;
		}
	}
	printf("\nVowels are:%d",v);
	printf("\nConsonants are:%d",c);*/
	
	return 0;
}
