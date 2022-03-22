#include<stdio.h>
int main()
{
	int t,k;
	scanf("%d",&k);
	while(k--)
	{
		int x,y;
		int x1,y1;
		scanf("%d%d",&x,&y);
		if(x<y)
		{
			t=x;
			x=y;
			y=t;
		}
		int a=x-y,b=x+y;
		int m=0;
		int result;
		for(int i=a+1;i<b;i++)
		{
			if(x*x+y*y==i*i||x*x-y*y==i*i)
			{
				m=1;
				result=i;
				break;
			}
		}
		if(m==1) printf("%d\n",result);
		else printf("None\n");	
	}
	return 0;
} 

