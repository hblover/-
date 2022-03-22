#include<stdio.h>
int w[10000],e[10000],E[10000][10000];//e负责边，E负责点
int i,j;
int main()
{
	int q,t,n,p=0;
	scanf("%d",&n);
	int m=n*(n-1)/2;
	for(i=1;i<=n-1;i++)
	{
		for(j=i+1;j<=n;j++)
		 scanf("%d",&E[i][j]); 
	} 
	for(i=1;i<=m;i++)
	{
		scanf("%d",&e[i]);
	}
	for(i=1;i<=m;i++)
	{
		for(j=i+1;j<=m;j++)
		{
			if(e[i]>e[j])
			{
				t=e[i];
				e[i]=e[j];
				e[j]=t;
			}
		}
	}
	for(i=1;i<=n;i++) w[i]=i;
	int k=1;
	while(p<n)
	{
		for(i=1;i<=n-1 && p<n;i++)
		{
			for(j=i+1;j<=n && p<n;j++)
			{
		  		if(w[i]!=w[j] && e[k]==E[i][j] && p<n  )
		  		{
		  			E[i][j]=0;
		  			for(q=1;q<=n;q++)
		  			{
		  				if(w[q]==w[i]) 
						  w[q]=w[j];
					}
		  			p++;
		  			break;
				}
			}
			if(E[i][j]=0) break;
		}
		k++;
	}
	for(i=1;i<=n-1;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(E[i][j]==0) printf("%d->%d ",i,j);
		} 
    }
    return 0;
}




