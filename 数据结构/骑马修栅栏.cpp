#include<stdio.h>
#include<math.h> 
int p[10001][10001];//��¼������֮���·������ 
int q[10001];//������¼��� 
int l[10001];//��¼·�� 
int n,x,y,js=0;//��������ݺͼ�����
int maxn=0;

int max(int x,int y)
{
	if(x>=y) return x;
	if(x<y) return y;
}

void find(int i)//
{
	int j;
	for(j=1;j<=maxn;++j)//�������ﲻ��n����maxn��Ϊn���ǵ�ĸ������������ж����� 
	{
		if(p[i][j]>=1)
		{
			p[i][j]--;//ɾȥ��һ��������ظ� 
			p[j][i]--;//z�����һ�ʻ���һ���������ۼ���һ�ʻ�ֱ�ӱ��0 
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
		q[y]++;//��¼���ֵĴ��� 
		maxn=max(maxn,max(x,y));//��ĸ��� 
	}
	int start=1;//Ĭ�������1 
	for(int i=1;i<=maxn;++i)
	{
		if(q[i]%2)//�ҵ���� 
		{
			start=i;//��¼���
			break;//Ȼ�����ѭ�� 
		}
	}
	find(start);//����㿪ʼ�� 
	for(int i=js;i>=1;i--)
	{
		printf("%d\n",l[i]);//�������·�����һ��� 
	}
	return 0;
}
