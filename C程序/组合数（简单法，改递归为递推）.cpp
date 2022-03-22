#include<stdio.h>
int main()
{
	long long int n,t,i,C,m;
	while(scanf("%I64d",&n) && n>=0)
	{
		printf("2^%I64d=1",n);
		for(i=1;i<=n;i++)
		{
			C=1;
			for(t=n,m=1;m<=i;t--,m++)
			{
				C=(C*t)/m;//注意递推公式 
			}
			printf("+%I64d",C);
		}
		printf("\n");
	}
	return 0;
 } 
