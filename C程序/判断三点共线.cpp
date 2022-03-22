#include<stdio.h>
int main()
{
	int N,x[10000][3],y[10000][3];
	scanf("%d\n",&N);
	for(int i=1;i<=N;i++)
	{
		for(int j=3;j>0;j--)
		{
			scanf("%d %d\n",&x[i][j],&y[i][j]);
		}
		int a=x[i][1]-x[i][2];
		int b=y[i][1]-y[i][2];
		int c=x[i][1]-x[i][3];
		int d=y[i][1]-y[i][3];
		if(a*d==c*b) printf("Yes\n");//除法有较大的误差，一般使用乘法计算 
		else printf("No\n");
		continue;	
	}
	return 0; 
 } 
