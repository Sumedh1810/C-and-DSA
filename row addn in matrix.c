#include<stdio.h>
int main(){
	
	int r, c, i, j, rsum, csum;
	printf("Enter number of rows in martix:");
	scanf("%d",&r);
	printf("Enter number of columns in martix:");
	scanf("%d",&c);
	
	int mat[i][j];
	
	printf("Enter elements in matrix:");
	
	for(i=0;i<r;i++)
	{
		
	for(j=0;j<c;j++)
	{
		scanf("%d", &mat[i][j]);
	}
	}
	
	
	for(i=0;i<r;i++)
	{
	    int rsum=0;
	
	    for(j=0;j<c;j++)
	{
	        rsum=rsum+mat[i][j];
	}
	printf("\nAddition of row is:%d",rsum);
	}
	
	for(i=0;i<r;i++)
	{
	    int csum=0;
	
	    for(j=0;j<c;j++)
	{
	        csum=csum+mat[j][i];
	}
	printf("\nAddition of cols is:%d",csum);
	}	
	return 0;
}
