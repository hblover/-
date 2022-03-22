#include<stdio.h> 
int main()
{
	int j,i,m,n;
	int a[1000],b[1000];
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++) scanf("%d",&a[i]);
	for(i=0;i<n;i++) scanf("%d",&b[i]);
	for(i=0;i<n;i++) a[b[i]]=-1;
	for(i=m-1;i>=0;i--)
	{
		if(a[i]!=-1) printf("%d ",a[i]);
	}
	
	return 0;
}

