#include<stdio.h>
int C[10000][10000];//每一条边之间的权值 
int A[10000][10000];//从i到j中间不经过编号大于k的顶点的最短通路长度 
int P[10000][10000];//确定是否到达最短通路 
int i,j,k;//辅助变量
int n;//顶点数目 
int a,b,c;//所求的两顶点与一个中间点 
#define max 10000//表示无穷大 

 
//int Path(int a,int b)//求出最短通路 
//{
	
//	c=P[a][b];
//	if(c==0) return 0;
//	Path(a,c);
//	return c;
//	Path(c,b);
//}

int main()
{
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&C[i][j]);	//输入各个边之间的权值
			A[i][j]=C[i][j];	//初始化A[i，j] 
			P[i][j]=j;       //为零时表示此时i,j间最短通路正是此时 
		}
	}
	for(k=1;k<=n;k++)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if((A[i][k]+A[k][j])<A[i][j])
				{
					A[i][j]=A[i][k]+A[k][j];
					P[i][j]=k;
				}
			}
		}
	}
	scanf("%d %d",&a,&b);
	c=P[a][b];//求由a->b的最小路径
	printf("%d",a);//打印起点
	while(c!=b)
	{
		printf("->%d",c);//打印中间点
		c=P[c][b];
	}
	printf("->%d\n",b); 
	return 0; 
}

 

 
