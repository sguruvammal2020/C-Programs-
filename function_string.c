//Functions
//Author: Dr. Guruvammal S, Date: June 2023
	/* Write functions to implement string operations such as compare, 
	concatenate and find string length. Use the parameter passing techniques. */
	
#include<stdio.h>

int str_length(char []);
int str_compare(char [],char []);
void str_concat(char [],char []);

int main()
{
	int choice,result;
	char str1[50],str2[50];
	
	while(1)
	{
		printf("\n Menu\n");
		printf(".......\n");
		printf("\n1. String Length");
		printf("\n2. String Concatenation");
		printf("\n3. String Compare");
		printf("\n4. Exit");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\nEnter a string:");
				scanf("%s",str1);
				result=str_length(str1);
				printf("\nThe length of %s is %d \n",str1,result);
				break;
			case 2:
				printf("\n Enter two strings for string concatenation:");
				scanf("%s %s",str1,str2);
				str_concat(str1,str2);
				printf("\nThe string after concatenation is %s\n",str1);
				break;
			case 3:
				printf("\nEnter two strings for string compare:");
				scanf("%s%s",str1,str2);
				result=str_compare(str1,str2);
				if(result<0)
					printf("\nString %s is less than string %s\n",str1,str2);
				else if(result==0)
					printf("\nString %s is same as string %s\n",str1,str2);
				else
					printf("\n String %s is greater than String %s\n",str1,str2);
				break;
			case 4:
				return 0;
			default:
				printf("\nInvalid option");
		}
	}
	
	return 0;
}

int str_length(char s[])
{
	int i;
	for(i=0;s[i]!='\0';i++) { }
	return i;
}

int str_compare(char s1[],char s2[])
{
	int i;
	for(i=0;s1[i]!='\0' && s2[i]!='\0';i++)
	{
		if(s1[i]!=s2[i])
		{
			return (s1[i]-s2[i]);
		}
	}
	
	return (s1[i]-s2[i]);
}

void str_concat(char des[],char src[])
{
	int i,j;
	for(i=0;des[i]!='\0';i++);
	//printf("%d",i);
	for(j=0;src[j]!='\0';i++,j++)
	{
		des[i]=src[j];
		//printf("%c",des[i]);
	}
	
	des[i]='\0';
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
				
				
				
				
				
				
				
				
				
				

		
