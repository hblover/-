#include<stdio.h>
#include<math.h>
int main()
{
	int k;
	int m,a;
	scanf("%d",&k);
	while(k--)
	{
		scanf("%d",&m);
		int count=0,n=1;
		for(int i=1;i<=m;i++)
		{
			n=n%m;
			count++;
			if(n==0) break;
			else n=n*10+1;
		}
		if(n==0) printf("%d\n",count);
		else printf("0\n");
	}
	return 0; 
} 
	

