#include<stdio.h>
int C(int n,int m)
{
	if(m==0) return 1;
	if(m==1) return n;
	if(m>n/2) return C(n,n-m);
	if(m>1) return C(n-1,m-1)+C(n-1,m);
}

int main()
{
	int n;
	while(scanf("%d",&n) && n>=0)
	{
			printf("2^%d=",n);
			for(int i=0;i<n;i++)
			{
				printf("%d+",C(n,i));
			}
			printf("%d\n",C(n,n));	
	}
	return 0;
}
