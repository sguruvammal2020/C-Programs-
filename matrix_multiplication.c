//Matrix multiplication
//Author: Dr.Guruvammal S, Date: June 2023
/*
Implement matrix multiplication and validate the rules of multiplication
*/
#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int m,n,p,q;
	int i,j,k;
	
	printf("\n Enter the order of the matrix A");
	scanf("%d%d",&m,&n);
	printf("\n Enter the order of the matrix B");
	scanf("%d%d",&p,&q);
	
	if(n!=p)
	{
		printf("\n Matrix multiplication is not possible");
		return 1;
	}
	printf("\nEnter %d elements into matrix A",m*n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n The matrix A is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nEnter %d elements into matrix B",p*q);
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n The matrix B is:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	
	printf("\n The product matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}












		
	
	
	
	
