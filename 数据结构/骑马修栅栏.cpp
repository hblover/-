#include<stdio.h>
#include<math.h> 
int p[10001][10001];//记录两个点之间的路径个数 
int q[10001];//辅助记录奇点 
int l[10001];//记录路径 
int n,x,y,js=0;//输入的数据和计数器
int maxn=0;

int max(int x,int y)
{
	if(x>=y) return x;
	if(x<y) return y;
}

void find(int i)//
{
	int j;
	for(j=1;j<=maxn;++j)//而且这里不是n而是maxn因为n不是点的个数而是下面有多少行 
	{
		if(p[i][j]>=1)
		{
			p[i][j]--;//删去边一次吗避免重复 
			p[j][i]--;//z这里和一笔画不一样这里是累减而一笔画直接变成0 
			find(j);
		}
	}
	l[++js]=i;
}


int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;++i)
	{
		scanf("%d%d",&x,&y);
		p[x][y]++;
		p[y][x]++;
		q[x]++;
		q[y]++;//记录出现的次数 
		maxn=max(maxn,max(x,y));//点的个数 
	}
	int start=1;//默认奇点是1 
	for(int i=1;i<=maxn;++i)
	{
		if(q[i]%2)//找到奇点 
		{
			start=i;//记录奇点
			break;//然后结束循环 
		}
	}
	find(start);//从奇点开始找 
	for(int i=js;i>=1;i--)
	{
		printf("%d\n",l[i]);//挨个输出路径并且换行 
	}
	return 0;
}
