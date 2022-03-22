#include<stdio.h>
int main()
{
	int n;
	while(scanf("%lld",&n))
	{
		int sum=0;
		if(n==0) return 0;
		else
		{
			while(n!=0)
			{
				sum=sum+n%10;
				n=n/10;
			}	
		}
		while(sum>=10)
		{
			int a=sum;
			sum=0;
			while(a)
			{
				sum+=a%10;
				a=a/10;
			}
		}	
		printf("%d\n",sum);
	}
	return 0;	
} 


