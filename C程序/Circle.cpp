#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int x2,y2,r2,x1,y1,r1;
		scanf("%d %d %d",&x1,&y1,&r1);
		scanf("%d %d %d",&x2,&y2,&r2);
		int a=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
		int m=(r1+r2)*(r1+r2);
		int n=(r1-r2)*(r1-r2);
		if(a>m) printf("5\n");
		else if(a==m) printf("4\n");
		else if(a==n) printf("2\n");
		else if(a<n) printf("1\n");
		else printf("3\n");
	}
 } 
