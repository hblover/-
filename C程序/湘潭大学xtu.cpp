#include<stdio.h>
#include<string.h>
int main()
{
	int k;
	scanf("%d ",&k);
	while(k--)
	{
		char ch[1001];
		int a=0,b=0,c=0;
		gets(ch);
		for(int i=0;i<strlen(ch);i++)
		{
			if(ch[i]=='X') a++;
			if(ch[i]=='T') b++;
			if(ch[i]=='U') c++;
		}
		if(a<=b && a<=c) printf("%d\n",a);
		else if(b<=a && b<=c) printf("%d\n",b);
		else printf("%d\n",c);
	} 
} 
