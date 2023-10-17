//Pointers
//Author: Dr. Guruvammal S, Date: June 2023
		/* Develop a program using pointers to compute the sum, mean and standard deviation of 
		all elements stored in array of N real numbers */

#include<stdio.h>
#include<math.h>

int main()
{
	int i,n;
	float a[10],mean,sd,sum,var;
	float *p;
	
	printf("\n Enter number of elements:");
	scanf("%d",&n);
	printf("\nEnter the elements:");
	p=a;
	for(i=0;i<n;i++)
	{
		scanf("%f",p);
		p++;
	}
	p=a;
	printf("\nInput elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%f\t",*p);
		p++;
	}
	p=a;
	
	sum=sd=mean=var=0;
	
	for(i=0;i<n;i++)
	{
		sum+=(*p);
		p++;
	}
	
	mean=sum/n;
	
	p=a;
	for(i=0;i<n;i++)
	{
		var+=pow((*p-mean),2);
		p++;
	}
	
	var=var/n;
	
	sd=sqrt(var);
	
	printf("\nMean=%f\nSum=%f\nSD=%f\nVariance=%f\n",mean,sum,sd,var);

	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
