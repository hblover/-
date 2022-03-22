#include<stdio.h>
int main()
{
	int a[1000],b[1000],c[1000],m,j,i;
	scanf("%d %d\n",&a[0],&b[0]);
	for(i=1;i<=a[0];i++) scanf("%d %d\n",&a[i],&b[i]);
	j=0;
	for(i=1;i<=a[0];i++) 
	{
		m=b[j];
		c[i]=a[m];
		j=m;
	}
	for(i=a[0];i>=1;i--)
	{
		printf("%d ",c[i]);
	}
} 
