//Structures
//Author: Dr.Guruvammal S, Date: June 2023

	/* Implement structures to read,to write and compute average marks and students
	scoring above and below the average marks for a class of N students*/

#include<stdio.h>

int main()
{
	struct Student
	{
		int stu_id;
		char name[50];
		float sub_mark[6];
		float avg;
	};
	
	struct Student s[20];
	int i,j,n; 
	float sum;
	
	printf("\nEnter the number of records:");
	scanf("%d",&n);
	
	printf("\nEnter %d student details...\n",n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter Student ID:");
		scanf("%d",&s[i].stu_id);
		printf("\nEnter Student's Name:");
		scanf("%s",s[i].name);
		printf("\n Enter the Student's 6 subjects marks:");
		for(j=0;j<6;j++)
		{
			scanf("%f",&s[i].sub_mark[j]);
		}
	}
		
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=0;j<6;j++)
		{
			sum+=s[i].sub_mark[j];
		}
		s[i].avg=sum/6;
	}
	printf("\nStudent scoring above the average marks:\n");
	printf("\nID\tName\t\taverage\n");
	for(i=0;i<n;i++)
	{
		if(s[i].avg>=35.0)
			printf("%d\t%s\t\t%f\n",s[i].stu_id,s[i].name,s[i].avg);
	}
	
	printf("\nStudent scoring below the average marks:\n");
	printf("\nID\tName\t\taverage\n");
	for(i=0;i<n;i++)
	{
		if(s[i].avg<35.0)
			printf("%d\t%s\t\t%f\n",s[i].stu_id,s[i].name,s[i].avg);
	}
	
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
		
		
