#include<stdio.h>
#include<stdlib.h>
#define max 50

void reverseString(char strr[max]);
void lengthString(char strl[max]);
void lowercaseString(char strlc[max]);
void uppercaseString(char srtuc[max]);
void stringConcatenation(char str1[max], char str2[max]);

int main()
{
	int ch,i;
	char strr[max];
	char strl[max];
	char strlc[max];
	char struc[max];
	char str1[max];
	char str2[max];
	do{
		printf("----------------------------------MENU------------------------");
		printf("\n1-For string reverse.\n2-For string length.\n3-To convert string into lower case.\n4-To convert string into upper case.\n5-For string concatenation.");
		printf("\nEnter your choice :");
		scanf("%d",&ch);
		
		switch(ch)
		{
			
			case 1:
				printf("\nEnter a string:");
				scanf("%s",strr);
				reverseString(strr);
				break;
				
			case 2:
				printf("\nEnter a string:");
				scanf("%s",strl);
				lengthString(strl);
			    break;
				
			case 3:
				printf("\nEnter a string:");
				scanf("%s",strlc);
				lowercaseString(strlc);
			    break;		
			
			case 4:
				printf("\nEnter a string:");
				scanf("%s",struc);
				uppercaseString(struc);
				break;
				
			case 5:
				printf("\nEnter first string:");
				scanf("%s",str1);
				printf("\nEnter second string:");
				scanf("%s",str2);
				stringConcatenation(str1,str2);
			    break;	
		}
		
		printf("\nTo continue press 1.");
		scanf("%d",&ch);		
	}while(ch==1);
	printf("\nThankYou");
			
	return 0;
}
	
void reverseString(char strr[])
{
	int i,l=0;
	for(i=0;strr[i]!='\0';i++)
	{
		l++;
	}
	
	printf("\nString in reverse is:");
	for(i=(l-1);i>=0;i--)
	{
		printf("%c",strr[i]);
	}
}

void lengthString(char strl[])
{
	int i,l=0;
	for(i=0;strl[i]!='\0';i++)
	{
		l++;
	}
	printf("Length of strings is :%d",l);
	
}

void lowercaseString(char strlc[])
{
	int i;
	printf("String in lower case is:");
	for(i=0;strlc[i]!='\0';i++)
	{
		if((strlc[i]>=65) && (strlc[i]<=90))
		{
			strlc[i] = strlc[i] + 32;
		    printf("%c",strlc[i]);
		}
		else
		{
		    printf("%c",strlc[i]);
		}
	}
	
}

void uppercaseString(char struc[])
{
	int i;
	printf("String in lower case is:");
	for(i=0;struc[i]!='\0';i++)
	{
		if((struc[i]>=97) && (struc[i]<=122))
		{
			struc[i] = struc[i] - 32;
		    printf("%c",struc[i]);
		}
		else
		{
		    printf("%c",struc[i]);
		}
	}
	
}

void stringConcatenation(char str1[], char str2[])
{
	int i;
	printf("Concatenation is:");
	for(i=0;str1[i]!='\0';i++)
	{
		printf("%c",str1[i]);
	}
	for(i=0;str2[i]!='\0';i++)
	{
		printf("%c",str2[i]);
	}
}
		

