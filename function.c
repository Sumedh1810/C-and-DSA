#include<stdio.h>
void circleArea();
void triangleArea();
void rectangleArea();
int main()
{
	int ch;
		
	do{
	printf("-----------------------MENU---------------------");
	printf("\n1-For circle\n2-For triangle\n3-For rectangle");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
		
		if(ch==1)
		{
			circleArea();
		}
		else if(ch==2)
		{
			triangleArea();
		}
		else if(ch==3)
		{
			rectangleArea();
		}
		
	printf("\nTo continue press 1.\nTo exit press 2.\n");
	scanf("%d",&ch);		
	}
	while(ch==1);	

printf("\nThankYou....");

return 0;
}


void circleArea()
{
	float areac, r;
	printf("\nEnter radius:");
	scanf("%f",&r);
	
	areac=(float)3.14*r*r;
	printf("Area of circle is:%f",areac);
}

void triangleArea()
{
	float areat, b, h;
	printf("\nEnter base:");
	scanf("%f",&b);
	printf("Enter height:");
	scanf("%f",&h);
	
	areat=(float)0.5*b*h;
	printf("Area of triangle is:%f",areat);
}
void rectangleArea()
{
	float l, b, area;
	printf("\nEnter lenght:");
	scanf("%f",&l);
	printf("\nEnter breadth:");
	scanf("%f",&b);
	area=l*b;
	printf("\nArea of rectangle is:%f",area);
}
