#include<stdio.h>
int main()
{
	/*int i, j;
	int mat1[3][3], mat2[i][j], mat3[3][3]={0};
	
	int*ptr1[3][3];
	int*ptr2[3][3];
	int*ptr3[3][3];
	
	printf("Enter elements in matrix 1:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&mat1[i][j]);
			ptr1[i][j]=&mat1[i][j];
		}
	}
	
	printf("Enter elements in matrix 2:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&mat2[i][j]);
			ptr2[i][j]=&mat2[i][j];
		}
	}
	
	//Addition program
		
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			mat3[i][j] = *ptr1[i][j] + *ptr2[i][j];
			ptr3[i][j]=&mat3[i][j];
		}
	}
	printf("Addition is:");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%5d",*ptr3[i][j]);
		}
		printf("\n");
	}*/
	
	
	int i, j, k;
	int mat1[i][j];
	int mat2[j][k];
	int mat3[i][k];
	
	int*ptr1[3][3];
	int*ptr2[3][3];
	int*ptr3[3][3];
	
	printf("Enter elements in matrix 1:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&mat1[i][j]);
			ptr1[i][j]=&mat1[i][j];
		}
	}
	
	printf("Enter elements in matrix 2:");
	for(j=0;j<3;j++)
	{
		for(k=0;k<3;k++)
		{
			scanf("%d",&mat2[j][k]);
			ptr2[j][k]=&mat2[j][k];
		}
	}
	
	//multiplication program
		
	for(i=0;i<3;i++)
	{
	    for(k=0;k<3;k++)
	    {
	        for(j=0;j<3;j++)
	        
	        mat3[i][k] =mat3[i][k] + mat1[i][j] * mat2[j][k];
	        ptr3[i][k]=&mat3[i][k];
	        
	    }
	}
	printf("Multiplication is:");
	
	for(i=0;i<3;i++)
	{
		for(k=0;k<3;k++)
		{
			printf("%5d",*ptr3[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
