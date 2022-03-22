#include<stdio.h>
#include<math.h>
int main()
{
	int k,a,b,c;
	scanf("%d",&k);
	for(int i=1;i<=k;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		int m;
		int x;
		if(c==1)
		{
			if(a!=b)  printf("None\n");
			else
			{
				if(a==0) printf("1\n");
				else printf("0\n");
			}
		}
		else
		{
			if(a==b) printf("None\n");
			else
			{
				int x=(a-b*c)/(c-1);
				if(x>=0)
				{
					if((a-b*c)%(c-1)==0) printf("%d\n",x);
					else printf("None\n");
				}
				else printf("None\n");
			}
		}
	}
}
