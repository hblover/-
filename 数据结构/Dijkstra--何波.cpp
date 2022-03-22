#include<stdio.h>
#include<stdlib.h>
#define max 10000//表示无穷大 
int S[1000];//观察是否循环完毕 
int D[1000],d[1000];//存放权值，每次以最小权值替代 
int P[1000];//存放最小通路的数组 
int n;//顶点个数
int m;//边条数；
int C[1000][1000];//邻边的权值 
int q; 
int min(int a[],int n)//从剩下的点中取一个顶点k ，使得D[k]最小 
{
	int k,t=100000;
	for(k=2;k<=n;k++)
	{
		if(a[k]!=0 && a[k]<t) t=a[k];
	}
	for(k=2;k<=n;k++)
	{
		if(t==a[k]) 
		{
			return k;
		}
	}
}

int main()
{
	P[1]=1;
	int i,j=1,e;//辅助计数 
	scanf("%d",&n);
	S[j]=1;//从第一个点开始，自己定义第一个点 
	for(i=1;i<=n;i++) 
	{
		for(e=1;e<=n;e++)
		 scanf("%d",&C[i][e]);	//输入各个边之间的权值 
	}
	for(i=2;i<=n;i++) 
	{
		D[i]=C[1][i];//初始化D[i] 
		d[i]=D[i];//利用d[i]计算最小值 
	}
	for(i=1;i<n;i++)
	{
		S[++j]=min(d,n);//将新的最新者加入S 
		q=min(d,n);
		for(e=2;e<=n;e++)
		{
			if(D[e]>D[q]+C[q][e]) //用较小的数替换D[e] 
			{
				D[e]=D[q]+C[q][e];
				P[e]=q;
				d[e]=D[e];
			}
			
		}
		d[q]=0; 
	}
	for(i=2;i<=n;i++)
	 printf("%d",P[i]);
	return 0;
 } 
 //	0						  0							0			  0		                    0                         0
 //1 1 10000 2 10000 10000 1 1 3 4 10000 10000 10000 3 1 1 2 2 2 4 1 1 3 10000 10000 10000 2 3 1 2 10000 10000 2 10000 2 1
 
