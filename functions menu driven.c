#include<stdio.h>
void factorial();//type1
int areaCircle();

int main()
{
	int ch,area,ca;
	printf("----------------------------------MENU-----------------------------");
	printf("\n1-For factorial\n2-For circle area");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			factorial();
			break;
			
		case 2:
			printf("Area of circle is:",areaCircle());
		    break;	
	}
	
	
	
	
	
	
	
	return 0;
}

void factorial()
{
    int i,n, fact=1;
	printf("Enter number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	fact=fact*i;
    }
printf("Factorial is%d:",fact);
}

float circleArea()
{
	int r,ca;
	printf("Enter radius:");
	scanf("%d",&r);
	ca=3.14*r*r;
	return ca;
}








