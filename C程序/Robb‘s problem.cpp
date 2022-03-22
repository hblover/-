#include<stdio.h>
#include<math.h>
double PI=acos(-1);
double e=exp(1);
int a[1001][3000];
int main()
{
	int t;
	scanf("%d",&t);
	int n,m;
	a[0][1]=1;
	for(int i=1;i<=1000;i++)
 	{
		int tail=0;
		int count;
		if(i==1) count=1;
		else count=log10(2*i*PI)/2+i*log10(i/e)+1;
		for(int j=1;j<=count;j++)
		{
			a[i][j]=(a[i-1][j]*i+tail)%10;
			tail=(a[i-1][j]*i+tail)/10;
		}
	}
	while(t--)
	{
		scanf("%d%d",&n,&m);
		printf("%d\n",a[n][m]);
	} 
	return 0;
}
