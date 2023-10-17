//Electricity Bill
//Author: Dr.Guruvammal S Date: June 2023
	/* 
	An electricity board charges the following rates for the use of electricity:
	for the 1st 200 units, 80 paise/unit
	for the next 100 units , 90 paise/unit
	beyond 300 units, Rs.1/unit
	All the users are charged a minimum of Rs.100 as a meter charge. If the total amount is more than Rs.400, 
	then an additional surcharge of 15% of the total amount is charged.
	Write a program to read the name of the user, the number of units consumed and print out the charges

	*/
	
#include<stdio.h>
#define METERCHARGE 100
int main()
{
	float units,charge;
	char name[20];
	printf("\nEnter customer name:");
	scanf("%s",name);
	printf("\nEnter the units:");
	scanf("%f",&units);
	if(units<0)
	{
		printf("\nInvalid units\n");
		return 1;
	}
	if(units<=200)
	{
		charge=(0.8*units)+METERCHARGE;
	} 
	else if(units<=300)
	{
		charge=(0.8*200)+(0.9*(units-200))+METERCHARGE;
	}
	else
	{
		charge=(0.8*200)+(0.9*100)+(1*(units-300))+METERCHARGE;
	}
	
	if(charge>=400)
	{
		charge=charge+(charge*0.15);
	}
	printf("\n Electricity Bill\n");
	printf("\n Name:%s",name);
	printf("\n Number of units consumed:%0.2f",units);
	printf("\n Total bill amount:Rs.%0.2f\n",charge);
	return 0;
}


