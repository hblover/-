#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,sum;
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=2;i<=sqrt(n);i++)
		{
			sum=0;
			m=n;
			while(n%i==0) 
			{
				sum++;
				n=n/i;
			}
			if(m%i==0) 
			{
				printf("%d",i);
				if(sum>1) printf("^%d",sum);
				if(i<=n) printf("*");
			}
		}
		if(n>1) printf("%d",n);
		printf("\n");
	}
	return 0;	
} 
