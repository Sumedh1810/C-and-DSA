#include <stdio.h>
#include <stdlib.h>
#define max 50


void matrixAddition();
void matrixMultiplication();
void matrixTranspose(int , int , int mat[max][max]);
void rowAddition(int, int, int mat[max][max]);
int diagonalAddition(int, int, int mat[max][max]);

int main()
{
	int mat[max][max];
	int ch,i,j,r,c;
	int sum;
		
	do
	{
		printf("\n------------------------------MENU-----------------------------");
	printf("\n1-For matrix addition\n2-For matrix multiplication\n3-For matrix transpose\n4-For row addition of matrix\n5-For addition of diagonal elements");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
		matrixAddition();
		    break;
		    
		case 2:
		matrixMultiplication();
		    break;
			
		case 3:
			printf("Enter number of rows matrix :");
	        scanf("%d",&r);
	        printf("Enter number of cols matrix :");
	        scanf("%d",&c);
	        
	        printf("Enter elements in matrix:"); 
	        for(i=0;i<r;i++)
	        {
	        	for(j=0;j<c;j++)
	        	{
	        		scanf("%d",&mat[i][j]);
				}
			}
		matrixTranspose(r,c,mat);
		    break;
			
		case 4:
			printf("Enter number of rows matrix :");
	        scanf("%d",&r);
	        printf("Enter number of cols matrix :");
	        scanf("%d",&c);
	        
	        printf("Enter elements in matrix:"); 
	        for(i=0;i<r;i++)
	        {
	        	for(j=0;j<c;j++)
	        	{
	        		scanf("%d",&mat[i][j]);
				}
			}
			rowAddition(r,c,mat);	
		    break;
			
		case 5:
			printf("Enter number of rows matrix :");
	        scanf("%d",&r);
	        printf("Enter number of cols matrix :");
	        scanf("%d",&c);
	        
	        printf("Enter elements in matrix:"); 
	        for(i=0;i<r;i++)
	        {
	        	for(j=0;j<c;j++)
	        	{
	        		scanf("%d",&mat[i][j]);
				}
			}
			int diagonalAddition(r,c,mat);
			printf("Addition of diagonal elements is:",sum);	
		    break;			    
	}
	
	
	
	
	
	printf("\nTo continue press 1.");
	}while(ch==1);
	printf("\n-------------------------THANKYOU-------------------------");

		
return 0;
}


void matrixAddition()
{
	int r1,c1,r2,c2;
	int mat1[max][max];
	int mat2[max][max];
	int mat3[max][max]={0};
	int i,j;
	printf("Enter number of rows matrix 1:");
	scanf("%d",&r1);
	printf("Enter number of cols matrix 1:");
	scanf("%d",&c1);
	printf("Enter number of rows matrix 2:");
	scanf("%d",&r2);
	printf("Enter number of cols matrix 2:");
	scanf("%d",&c2);
	
	if(r1==r2 && c1==c2)
	{
		printf("Enter elements in matrix 1:");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
					scanf("%d",&mat1[i][j]);
			}
		}
		printf("Enter elements in matrix 2:");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
					scanf("%d",&mat2[i][j]);
			}
	    }
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			mat3[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
	
	printf("Addition is:");
	printf("\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%5d",mat3[i][j]);
		}
		printf("\n");
	}
    }
    else
    {
    	printf("\nAddition is not possible.");
    	printf("\nPlease enter same number of rows and cols for both matrices.");
	}
	
}

void matrixMultiplication()
{
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
	printf("Columns of first matrix should be equal to Rows of second matrix.");
}	
}

void matrixTranspose(int r,int c,int mat[max][max])
{
	int i,j;
	int matt[max][max];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			matt[j][i] = mat[i][j];
		}
	}
	printf("Transpose of given matrix is:");
	printf("\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%5d",matt[i][j]);
		}
		printf("\n");
	}
}

void rowAddition(int r,int c,int mat[max][max])
{
	int i,j,sum;
	for(i=0;i<r;i++)
	{
		sum=0;
		for(j=0;j<c;j++)
		{
			sum = sum + mat[i][j];
		}
		for(i=0;i<r;i++)
	        {
	        	sum=0;
		        for(j=0;j<c;j++)
		            {
			            sum = sum + mat[i][j];
		            }
		        printf("%d",i+1);    
		        printf(" row addition is:%2d",sum);
		        printf("\n");
		        
	        }	
	}
}

int diagonalAddition(int r, int c, int mat[max][max])
{
	int i,j,sum={0};
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				sum = sum + mat[i][j];
			}
		}
	}
	return sum;
}
