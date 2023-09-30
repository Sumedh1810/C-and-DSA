#include<stdio.h>
#define max 20



int main(){
	
	int r1, c1, r2, c2;
	int mat1[max][max], mat2[max][max], mat3[max][max]={0};
	int i,j,k;
	
	printf("Enter no of rows in matrix 1:");
	scanf("%d",&r1);
	
	printf("Enter no of cols in matrix 1:");
	scanf("%d",&c1);
	
	printf("Enter no of rows in matrix 2:");
	scanf("%d",&r2);
	
	printf("Enter no of cols in matrix 2:");
	scanf("%d",&c2);
	
	
	if(c1==r2){
	
	
	printf("Enter elements in matrix 1:\n");
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	
	printf("Enter elements in matrix 2:\n");
	
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&mat2[i][j]);
		}	
	}
	
	//multiplication
	for(i=0;i<r1;i++)
	{
		for(k=0;k<c2;k++)
		{
			for(j=0;j<r2;j++)
			{
				mat3[i][k] = mat3[i][k] + mat1[i][j] * mat2[j][k];	
			}
		}
	}
	
	printf("Multiplication of Matrices is:\n");
	
	for(i=0;i<r1;i++)
	{
		for(k=0;k<c2;k++)
		{
			printf("%5d",mat3[i][k]);
		}
		printf("\n");
	}
}

else{
	printf("Multiplication not possible");
}
	
	
	
	
	
	return 0;
	
}
