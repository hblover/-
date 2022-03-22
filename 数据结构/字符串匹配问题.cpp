#include<stdio.h>
char a[256];
int c[256],b[256];
int main()
{
	int k,i,j;
	scanf("%d",&k);
	while(k--)
	{
		scanf("%s",a);
		for(i=0;a[i]!='\0';i++)
		{
			if(a[i]=='<')c[i]=1;
			if(a[i]=='>')c[i]=2;
			if(a[i]=='(')c[i]=3;
			if(a[i]==')')c[i]=4;
			if(a[i]=='[')c[i]=5;
			if(a[i]==']')c[i]=6;
			if(a[i]=='{')c[i]=7;
			if(a[i]=='}')c[i]=8;
		}
		j=0;int n=0;
		for(i=0;a[i]!='\0';)
		{
			if(j==0)
			{
				b[++j]=c[i++];
			}
			else
			{
				if(c[i]%2==1)
				{
					if(c[i]<=b[j])
					{
						b[++j]=c[i++];
					}
					else
					{
						j=3;break;
					}
				}
				if(c[i]%2==0)
				{	if(c[i]-1==b[j])
					{
						i++;j--;
					}
					else
					{
						j=2;break;
					}
				}
			}
		}
		if(j==0)printf("YES\n");
		else printf("NO\n");
	}
}
