#include<stdio.h>
int a[1000][1000],k[1000];

int main()
{
	
	int n,i,j,m=1,min=1000;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[m][j]!=0 && min>a[m][j])
			{
				min=a[m][j];
				k[i]=j;
			}
		}
		a[m][k[i]]=0;
		a[k[i]][m]=0;
		m=k[i];	
		min=10000; 
	}
	printf("1");
	for(j=1;j<=n-1;j++)
	{
		printf("->%d",k[j]);
	}
	return 0;
 } 
