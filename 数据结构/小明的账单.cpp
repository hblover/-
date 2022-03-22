#include<stdio.h>
int b[15001],a[15001][101];
int main()
{
	int k,i,j,ii1,jj1,ii2,jj2;
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		scanf("%d",&b[i]);
		for(j=1;j<=b[i];j++) scanf("%d",&a[i][j]);
	}
	int n;
	for(n=1;n<=k;n++)
	{	int max=0,min=1000000000;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=b[i];j++)
			{
				if(max<a[i][j]&&a[i][j]!=-1)
				{
					max=a[i][j];jj1=j,ii1=i;
				}
			}
			for(j=1;j<=b[i];j++)
			{
				if(min>a[i][j]&&a[i][j]!=-1)
					{
						min=a[i][j];ii2=i;jj2=j;
					}
			}
		}
		a[ii1][jj1]=-1,a[ii2][jj2]=-1;
		printf("%d %d\n",min,max);
	}
	return 0;
}
