#include<stdio.h>
int main()
{
	int k,j,i,n,m,a[1000],b[1000];
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		scanf("%d ",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i==b[j])
			{
				for(k=i;k<n;k++) a[k]=a[k+1];
				n--;
				for(int p=0;p<m;p++) b[p]--;
			}
		}
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
 } 
