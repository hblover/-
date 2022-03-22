#include<stdio.h>
#include<stdlib.h> 
int main(void)
{
	char stack[256];
	char str[256]={0};
	gets(str);
	int i=0,j=0;
	while(str[i]!=0)
	{
		if(str[i]=='(' || str[i]=='[')
		  stack[++j]=str[i];
		else if(str[i]==')' || str[i]==']')
		{
			if(j==0) 
			{
				printf("Wrong");
				return 0;
			}
			if((str[i]==')' && stack[j]=='(') || (str[i]==']' && stack[j]=='['))
		  	{
		 		j--;
		  	}
		  	else
			{
		  		printf("Wrong");
		  		return 0;
		  	} 
		}
		i++;
	}
	if(j==0)
	{
		printf("OK");
	}
	else
	{
		printf("Wrong");
	}
	return 0; 
	
} 
