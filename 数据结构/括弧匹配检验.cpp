#include<stdio.h>
#include<string.h>
int main()
{
	char a[256]={0},stack[256];
	gets(a);
	int i=0,j=0;
	while(a[i]!=0)
	{
		if(a[i]=='[' || a[i]=='(') stack[++j]=a[i];
		if(a[i]==']' || a[i]==')')
		{
			if(j==0)
			{
				printf("Wrong");
				return 0;
			}
			if((a[i]==']' && stack[j]=='[') || (a[i]==')' && stack[j]=='('))
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
	if(j==0) printf("OK");
	else printf("Wrong");
	return 0;
} 
