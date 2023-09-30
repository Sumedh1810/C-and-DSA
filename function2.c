

//FUNCTIONS WITH ARGUMENTS AND RETURN TYPE
#include<stdio.h>
int addData(int,int);

int main()
{

	int n1, n2, add;
	printf("Enter 2 nos:");
	scanf("%d%d",&n1,&n2);
	add=addData(n1,n2);
	printf("Addition is:%d",add);
	return 0;
}

int addData(int n1,int n2)
{
	int add;
	add=n1+n2;
	return add;
}



//TYPE 2

#include<stdio.h>
void circleArea(int);

int main()
{
	float r;
	float ca;
	printf("Enter radius of circle:");
	scanf("%f",&r);
	circleArea(r);
	return 0;
	
}

void circleArea(float r)
{
	float ca;
	ca=3.14*r*r;
	printf("Area of circle is:%.2f",ca);
}*/



//TYPE 4

float triangleArea(int,int);
int main()
{
	int b,h;
	float ta;
	printf("Enter breadth:");
	scanf("%d",&b);
	printf("Enter height:");
	scanf("%d",&h);
	ta=triangleArea(b,h);
	printf("Area of triangle:%f",ta);
	return 0;
	
	
}

float triangleArea(int b,int h)
{
	float ta;
	ta=0.5*b*h;
	return ta;
}



int factorial(int);
int main()
{
	int n, fact;
	printf("Enter any number:");
	scanf("%d",&n);
	fact=factorial(n);
	printf("Factorial is:%d",fact);
	return 0;
	
	
}

int factorial(n)
{
	int i, fact=1;
	for(i=1;i<=n;i++)
	{
	fact=fact*i;
}
	return fact;
}





