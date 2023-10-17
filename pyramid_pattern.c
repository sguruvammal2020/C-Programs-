//Pyramod pattern
//Author: Dr.Guruvammal S Date: June 2023
/*
	Write a C program to display the following by reading the number of rows as input 
	   	1
	   1	2	1
	1  2	3	2	1
   1	2  3	4	3	2	1
   
   .....
    
    nth row
*/

#include<stdio.h>
int main()
{
	int i,j,n;
	printf("\n Enter the number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(j=i-1;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
				   
