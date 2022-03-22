#include<stdio.h>
int main()
{
	int i,j,t,m,n,k,x[10001],y[10001];
	scanf("%d",&t);
	while(t--)
	{
		int a=0,b=0;
		scanf("%d%d%d",&m,&n,&k);
		for(i=1;i<=k;i++)
			scanf("%d%d",&x[i],&y[i]);
		for(i=1;i<=m;i++)
		{
			for(j=1;j<=k;j++)
			{
				if(i==x[j]) 
				{
					a++;
					break;
				}
			}
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=k;j++)
			{
				if(i==y[j]) 
				{
					b++;
					break;	
				}
			}
		}
		printf("%d\n",(m-a)*n+(n-b)*m-(m-a)*(n-b));		
	}
	return 0;
}

