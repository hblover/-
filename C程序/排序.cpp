#include<stdio.h>
int main()
{
	int k,n,e[1001];
	char a;
	scanf("%d",&k);
	while(k--)
	{
		int t;
		scanf("%d %c",&n,&a);
		for(int i=1;i<=n;i++) scanf("%d",&e[i]);
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				if(e[i]>e[j])
				{
					t=e[i];
					e[i]=e[j];
					e[j]=t;
				}
			}
		}
		if(a=='A')
		{
			int i;
			for(i=1;i<n;i++)
			{
				printf("%d ",e[i]);
			}
			printf("%d\n",e[i]);
		}
		if(a=='D')
		{
			int i;
			for(i=n;i>1;i--)
			{
				printf("%d ",e[i]);
			}
			printf("%d\n",e[i]);
		}
	}
	return 0;	
} 

