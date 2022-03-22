#include<stdio.h>
int colombian(int m)
{
	int	sum;
	sum=m;
	while(m!=0)
	{
		sum+=m%10;
		m/=10;
	}
	return sum;
}
int main()
{
	int k,z,n,i;
	scanf("%d",&k);
	while(k--)
	{
		scanf("%d",&n);
		for(i=n-1;i>=n/2;i--)
	{
		if(colombian(i)==n) 
		{
			z=1;
			break;
		}
		else z=0; 
	}
	if(z==1) printf("No\n");
	else printf("Yes\n");	
	}
	return 0;
}
