#include<stdio.h>
int main()
{
	int t,T,a[2000],b[2000],c[2000];
	scanf("%d",&T);
	for(int i=1;i<=2*T;i++)
	{
		scanf("%d %d %d",&a[i],&b[i],&c[i]);
		if(a[i]>b[i]) 
		{
		  t=a[i];
		  a[i]=b[i];
		  b[i]=t;	
		}
		if(a[i]>c[i])
		{
		  t=a[i];
		  a[i]=c[i];
		  c[i]=t;
		}
		if(b[i]>c[i])
		{
		  t=b[i];
		  b[i]=c[i];
		  c[i]=t;
		}
	}
	for(int n=1;n<=(2*T-1);n=n+2)
	{
		if((a[n]*b[n+1])==(b[n]*a[n+1]) && (a[n]*c[n+1])==(c[n]*a[n+1])) printf("Yes\n");
		else printf("No\n");
		
	}
	
	
	return 0;
 } 
