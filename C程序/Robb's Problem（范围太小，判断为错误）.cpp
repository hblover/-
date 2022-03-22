#include<stdio.h>
#include<math.h>
__int64 Factor( int n)
{
	int i;
	__int64 a=1;
	for(i=1;i<=n;i++)
	{
		a=a*i;
	}
	return a;	
}

int f(int num,int idx)
{
	int a[100],i=0;
	while(num>0)
	{
		a[++i]=num%10;
		num/=10;
	}
	return a[idx];
}

int main()
{
	int t,m,n,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&m);
		k=Factor(n);
		if(t>=1) printf("%d\n",f(k,m));
	}
	printf("%d",f(k,m));
	return 0;
}
