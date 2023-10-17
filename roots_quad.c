//Roots of quadratic equation 
//Author : Dr.Guruvammal S Date: June 2023
//Compute the roots of a quadratic equation by accepting the co-efficients and Print appropriate messages

#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,disc;
	float r1,r2;
	float realpart,imgpart;
	
	//Accept the co-efficients a,b and c
	printf("\n Enter the co-efficients of a,b and c:");
	scanf("%f%f%f",&a,&b,&c);
	// Check whether the equation is quadratic or linear 
	if(a==0)  	// if equation is linear
	{
		printf("\n co-efficient a of quadratic equation can not be zero");
		printf("\n Its a linear equation");
		return 1;
	}
	
	//Compute the discriminant
	disc=(b*b)-(4*a*c);
	// If the discriminant is zero, the roots are real and equal
	if(disc==0)
	{
		printf("\n The roots are real and equal");
		r1=r2=(-b)/(2.0*a);
		printf("\nthe two roots are r1=r2=%f\n",r1);
	}
	else if(disc>0)
	{
		printf("\n The roots are real and distinct");
		r1=(-b+sqrt(disc))/(2.0*a);
		r2=(-b-sqrt(disc))/(2.0*a);
		printf("\nThe roots are r1=%f and r2=%f\n",r1,r2);
	}
	else
	{
		printf("\nThe roots are imaginary");
		realpart=(-b)/(2.0*a);
		imgpart=sqrt(-disc)/(2.0*a);
		printf("\n The roots are");
		printf("\nr1=%f+i%f",realpart,imgpart);
		printf("\nr2=%f-i%f\n",realpart,imgpart);
	}
	return 0;
}
		
	
	
	

