#include <stdio.h>
#include<stdlib.h>
/*int main()
    {
	int no;
	printf("Enter a number:");
	
	scanf("%d",&no);
	
	if(no>0){
		printf("\nNumber is +ve");
	}
	else if (no<0){
		printf("\nNumber is -ve");
	}
	else if(no==0){
		printf("\nNumber is zero");
	}
	return 0;
    }
	*/ 
	// COMPARING TWO NUMBERS
	/*int main(){
	
	int a, b;
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	
	if(a > b)
	{
		printf("\nA is greater");
	}
	else if(b > a)
	{
		printf("\nB is greater");
	}
	else if(a == b)
	{
		printf("\nBoth are equal");
	}
	return 0;
}*/

//AMONG 3 NUMBERS
/*int main(){
	
	int a, b, c;
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	printf("Enter value of c:");
	scanf("%d",&c);
	
	if(a > b && a > c)
	{
		printf("\nA is greatest");
	}
	else if(b > a && b > c)
	{
		printf("\nB is greatest");
	}
	else if(c > a && c > b)
	{
		printf("\nC is greatest");
	}
	else if(a == b && b > c)
	{
		printf("\n Both a and b are greatest");
	}
	else if(a == b && b < c)
	{
		printf("\n C is greatest");
	}
	else if(a == c && a > b)
	{
		printf("\n A and B are greatest");
	}
	else if(a == c && a < b)
	{
		printf("\n A nad C are greatest");
	}
	else if(b == c && b > a)
	{
		printf("\n B and C are greatest");
	}
	else if(b == c && b < a)
	{
		printf("\nA is greatest");
	}
	else if(a == b && a == c)
	{
		printf("\nAll are same");
	}
	return 0;
}*/

int main(){
	char ch;
	printf("\nEnter any character :");
	scanf("%c,&ch");
	
	if((ch>=65)&& (ch<=90))
	{
		printf("\nCapital character");
	}
	else if((ch>=97) && (ch<=122))
	{
		printf("\nSmall character");
	}
	else if((ch>=48) && (ch<=57))
	{
		printf("\nNumber");
	}
	else 
	{
		printf("\nOther character");
	}
	printf("\n%cASCII for %c is %d",ch, ch);
	return 0;
}
