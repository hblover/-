#include<stdio.h>
int main()
{
	int a[8],b[8],c[8];
	int i,j,k,m,n;
	scanf("%d",&n);
	for(i=1;i<=7;i++) a[i]=i;
	while(n--)
	{
		for(i=1;i<=7;i++) scanf("%d",&b[i]);
		m=0;
		for(j=1,k=1;k<=8;)
		{
			if(b[j]==a[k])
			{
				j++;k++;
			}
			else if(b[j]==c[m])
			{
				m--;j++;
			}
			else
			{
				c[++m]=a[k++];
			}
		}
		if(m==0) printf("Y");
		else printf("N");
	}
	return 0;
}
