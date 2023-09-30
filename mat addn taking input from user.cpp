#include <stdio.h>
#include <stdlib.h>
#define max 20

int main(){
	int mat1[max][max], mat2[max][max], mat3[max][max];
	int i, j;
	
	int r1,c1,r2,c2;
	printf("How many rows and cols in mat1:");
	scanf("%d%d",&r1,&c1);
	
	printf("How many rows and cols in mat2:");
	scanf("%d%d",&r2,&c2);
	
	
	if((r1==r2)&&(c1=c2))
	{
	
	
	printf("Enter elements in martix 1:");
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d", &mat1[i][j]);
		}
	}
	
	printf("Enter elements in martix 2:");
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d", &mat2[i][j]);
		}
	}
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			
			mat3[i][j]=mat1[i][j] + mat2[i][j];
		}
	}
	printf("Addition is:");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%5d",mat3[i][j]);
		}
		printf("\n");
	}
}
else{
	printf("Addition not possible");
}
	
	return 0;
	
}
