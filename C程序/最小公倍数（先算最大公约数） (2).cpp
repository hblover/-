#include<stdio.h>
#include<math.h>
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	while(x*y!=0)
	{
		int a=0;
		int b;
		int min=y;
		if(min>x) min=x;
		for(int i=min;i>=1;i--)
		{
			if(x%i==0 && y%i==0)
			{
				a=i;
				break;
			}
		}	
		b=x*y/a;
		printf("%d\n",b);
		scanf("%d %d",&x,&y);
	} 
	return 0;
} 
