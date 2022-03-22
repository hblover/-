#include<stdio.h>
int C[35][35]={0};
int main()
{
	int n,m,k;
	C[0][1]=1;
	for(int i=1;i<=33;i++)
	{
		C[i][0]=1;
		for(int j=1;j<=i;j++)
		{
			C[i][j]=C[i-1][j]+C[i-1][j-1];
		}
	 } 
	scanf("%d",&k);
	while(k--)
	{
		int a=0;
		scanf("%d%d",&n,&m);
		if((m+n)%2!=0) printf("%d\n",a);
		else {
			a=(m+n)/2;
			printf("%d\n",C[n][a]);
		}
	}
	return 0;
} 
