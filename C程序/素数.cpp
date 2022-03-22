#include<stdio.h>
#include<math.h>
int main()
{
	unsigned n;
	while(scanf("%d",&n))
	{
		if(n==0) return 0;
		else if(n<=1) printf("No\n");
		else
		{
			int i,m=sqrt(n);
			for(i=2;i<=m ;i++)
			{
				if(n%i==0) break;
			}
			if(i>m) printf("Yes\n");
			else printf("No\n");
		}
	}
	return 0;
}
