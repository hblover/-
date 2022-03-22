#include<stdio.h>
int main()
{
	long long int n,a[1000],b[1000];
	while(scanf("%d",&n))
	{
		if(n==0) return 0;
		else
		{
			int i,j,sum=0;
		for(int i=0;i<n;i++)	
		{
			scanf("%d ",&a[i]);
			b[i]=a[i]*a[i]; 
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(b[i]==a[j])
				{
					sum++;
				}	
			}
		}
		printf("%lld\n",sum);
		}
	}
	return 0;
} 
