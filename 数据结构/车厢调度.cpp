#include<stdio.h>
int a[1001],b[1001],c[1001];
int main()
{
	int n;
	int i,j,k=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++) scanf("%d",&c[i]);
	for(i=1;i<=n;i++) a[i]=i;
	for(i=1,j=1;i<=n+1;)
	{
		if(a[i]==c[j])
		{
			i++;
			j++;
		}
		else if(c[j]==b[k])
		{
			k--;
			j++;
		}
		else
		{
			b[++k]=a[i++]; 
		}
	}
	if(k==0) printf("YES");
	else printf("NO");
	return 0;
 } 
