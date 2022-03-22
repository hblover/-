#include<stdio.h>
#include<math.h> 
int f(unsigned n)
{
	while(n)
	{
		if(n==0) return 0;
		else if(n<=1) return 0;
		else
		{
			int i,m=sqrt(n);
			for(i=2;i<=m ;i++)
			{
				if(n%i==0) break;
			}
			if(i>m) return 1;
			else return 0;
		}
	}
}
int main()
{
	int k,a,b;
	scanf("%d",&k);
	while(k--)
	{
		int sum=0;
		scanf("%d %d",&a,&b);
		for(int i=a;i<=b;i++)
		{
			if(f(i)) sum++;
		}
		printf("%d\n",sum);
	}
	return 0;
}
