//Taylor Series - Sine series
//Author: Dr.Guruvammal S, Date: June 2023
	/* Compute sin(x)/cos(x) using Taylor series approximation. 
	Compare your result with the built-in library function. 
	Print both the results with appropriate inferences
	*/
	
#include<stdio.h>
#include<math.h>
#define PI 3.142857

int main()
{
	float x,nume,deno,sum,term;
	int i,degree;
	
	printf("\nEnter degree:");
	scanf("%d",&degree);
	
	x=degree*(PI/180.0);
	
	sum=0;
	nume=x;
	deno=1.0;
	i=1;
	
	do
	{
		term=nume/deno;
		sum=sum+term;
		i=i+2;
		nume=nume*x*x*(-1);
		deno=deno*i*(i-1);
	}while(fabs(term)>=0.00001);
	printf("\n Computed value of sin(%d)=%f\n",degree,sum);
	printf("\n Value from library function is sin(%d)=%f\n",degree,sin(x));
	
	return 0;
}
	
