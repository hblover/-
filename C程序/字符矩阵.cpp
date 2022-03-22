#include<stdio.h>
int main()
{
	char ch[52][52],a;
	int i,j,n,m,t;
	while(scanf("%c",&a)!=EOF && a!='#')
	{
		n=a-'A';//n=3
		m=1;
		for(i=1;i<=n;i++)
		{
			for(j=m;j<=n;j++)
			{
				ch[i][j]='A'+j-1;
				ch[i][2*n+2-j]=ch[i][j];
			}
			m++;
		}
		t=1;
		for(i=2;i<=n;i++)
		{
			for(j=1;j<=t;j++)
			{
				ch[i][j]='A'+i-1;
				ch[i][2*n+2-j]=ch[i][j];
			}
			t++;
		}
		for(i=1;i<=2*n+1;i++)
		{
			ch[n+1][i]=a;
			ch[i][n+1]=a;
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=2*n+1;j++)
			{
				ch[2*n+2-i][j]=ch[i][j];
			}
		}
		for(i=1;i<=2*n+1;i++)
		{
			for(j=1;j<=2*n+1;j++)
			{
				printf("%c",ch[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
