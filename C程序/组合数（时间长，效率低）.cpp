#include<stdio.h>
__int64 f(unsigned int n)
{
	int sum=1;
	if(n==0) sum=1;
	if(n>0)
	{
		for(int i=1;i<=n;i++)
		{
			sum=sum*i;
		}
	}
	return sum;
}

int C(int n,int x)
{
	return f(n)/f(n-x)/f(x);
}

int main()
{
	long long int n;
	while(scanf("%lld",&n) && n>=0)
	{
			printf("2^%lld=",n);
			for(int i=0;i<n;i++)
			{
				printf("%d+",C(n,i));
			}
			printf("%d\n",C(n,n));	
	}
	return 0;
}
