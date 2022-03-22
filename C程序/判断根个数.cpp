#include<stdio.h>
int f(int a,int b,int c); int main()
{
	int k,a,b,c;
	scanf("%d",&k);
	for(int i=1;i<=k;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		int m;
		m=b*b-4*a*c;
		if(a!=0)
		{
			if(m==0) printf("1\n");
			if(m>0) printf("2\n");
			if(m<0) printf("0\n");
		}
		if(a==0 && b!=0) printf("1\n");
		if(a==0 && b==0) printf("INF\n");
	}
	return 0;
} 


