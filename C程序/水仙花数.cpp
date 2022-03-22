#include<stdio.h>
#include<math.h>
int main() 
{
	int a,n=0,b,sum=0,c;
	while(scanf("%d",&a) && a)
	{
		n=0;
		sum=0;
		c=a;
		while(c)
		{
			c/=10;
			n++;
		}
		c=a;
		while(c)
		{
			b=c%10;
			c=c/10;
			sum+=pow(b,n);
		}
		if(sum==a) printf("Yes\n");
		else printf("No\n");
	
	}
 } 
