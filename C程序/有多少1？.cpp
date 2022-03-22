#include<stdio.h>
#include<math.h>
int main()
{
	int i=0;
	unsigned int x;
	while(scanf("%d",&x)!=EOF)
	{
		while(x!=0)
	{
		if(x&1) i++;
		x=x>>1;
	}
	printf("%d\n",i);
	i=0;
	}
	
	return 0;
} 
