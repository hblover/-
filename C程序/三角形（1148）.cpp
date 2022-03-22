#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n) && n!=0)
	{
		int a[101],i,j,m;
		m=n;
		for(i=0;i<n;i++)
		{
			scanf("%d ",&a[i]);
		}
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<m-1;j++)
			{
				a[j]=(a[j]+a[j+1])%2013;
			}
			m--;
		}
		printf("%d\n",a[0]); 
	}
}
