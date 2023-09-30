#include<stdio.h>

int main(){
	int r, c, i, j;
	int mat[i][j];
	
	printf("Enter rows in matrix:");
	scanf("%d",&r);
	
	printf("Enter cols in matrix:");
	scanf("%d",&c);
	
	for(i=0;i<r;i++){
		
		for(j=0;j<c;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",mat[j][i]);
		}
		printf("\n");
	}
	return 0;
}
