#include<stdio.h>
#include<math.h>
int main()
{
	int a[100][100];
	int n,m,i,k,j,t=1,q;
	scanf("%d %d",&n,&m);
	if(m%2==0) q=m;
	if(m%2!=0) q=m+1;
	for(i=0;i<(q/2);i++)
	{
		for(j=i;j<m-i;j++) 
		{
			a[i][j]=t;
			t++;
		}
		if(t==m*n+1) break;
		for(k=i+1;k<n-i;k++)
		{
			a[k][m-1-i]=t;
			t++;
		}
		if(t==m*n+1) break;
		for(j=m-i-2;j>i;j--)
		{
			a[n-i-1][j]=t;
			t++;
		}
		if(t==m*n+1) break;
		for(k=n-i-1;k>i;k--)
		{
			a[k][i]=t;
			t++;
		}
		if(t==m*n+1) break;
	}
	for(j=0;j<n;j++)
	{
		for(k=0;k<m;k++) printf("%5d\t",a[j][k]);
		printf("\n");
	}	
}
