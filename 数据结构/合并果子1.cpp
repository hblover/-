#include <stdio.h>
#include<stdlib.h>
int camp(const void *a,const void *b)
{ //int类型排序 ,从小到大排序 
	int s1 = *(int *)a; 
	int s2 = *(int *)b;
	if(s1!=0&&s2!=0)
	{
	if(s1>s2)
		return 1;
	else if(s1==s2)
		return 0;
	else
		return -1;
	}
}

int main()
{
	int m=0,k,n,a[30000],b[30000],sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	
	while(n>1)
	{
		qsort(a,n,sizeof(int),camp);;
		a[0]=a[0]+a[1];
		b[m]=a[0];
		sum=sum+b[m];
		m++;
		for(k=1;k<n;k++) a[k]=a[k+1];
		n--;
	}
	printf("%d",sum);
	return 0;
} 
