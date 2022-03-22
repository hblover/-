#include<stdio.h>
#include<string.h>
int main()
{
	char str[500];
	int i,sum,a;
	gets(str);
	while(str[0]!='0')
	{
		for(i=0,sum=0;i<strlen(str);i++)
		{
			sum=sum+str[i]-'0';
		}
		while(sum>=10)
		{
			a=sum;
			sum=0;
			while(a)
			{
				sum=sum+a%10;
				a=a/10;
			}
		}
		printf("%d\n",sum);
		gets(str);
	}
	return 0; 
} 
