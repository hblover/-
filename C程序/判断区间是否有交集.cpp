#include<stdio.h>
int main()
{
	int N,x[100][2],y[1000][2];
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=2;j++)
		{
			scanf("%d %d",&x[i][j],&y[i][j]); 
		}
		if((x[i][1]>=x[i][2] && x[i][1]<=y[i][2]) || (y[i][1]<=y[i][2] && y[i][1]>=x[i][2]) || (x[i][1]>=x[i][2] && y[i][1]<=y[i][2]) || (x[i][1]<=x[i][2] && y[i][1]>=y[i][2]) )
		  printf("Yes\n");
		else
		  printf("No\n");
		continue;
	}
	return 0;
 } 
