#include<stdio.h>
int C[10000][10000];//ÿһ����֮���Ȩֵ 
int A[10000][10000];//��i��j�м䲻������Ŵ���k�Ķ�������ͨ·���� 
int P[10000][10000];//ȷ���Ƿ񵽴����ͨ· 
int i,j,k;//��������
int n;//������Ŀ 
int a,b,c;//�������������һ���м�� 
#define max 10000//��ʾ����� 

 
//int Path(int a,int b)//������ͨ· 
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
			scanf("%d",&C[i][j]);	//���������֮���Ȩֵ
			A[i][j]=C[i][j];	//��ʼ��A[i��j] 
			P[i][j]=j;       //Ϊ��ʱ��ʾ��ʱi,j�����ͨ·���Ǵ�ʱ 
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
	c=P[a][b];//����a->b����С·��
	printf("%d",a);//��ӡ���
	while(c!=b)
	{
		printf("->%d",c);//��ӡ�м��
		c=P[c][b];
	}
	printf("->%d\n",b); 
	return 0; 
}

 

 
