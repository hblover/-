#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
int a[1000],n;
int qpass(int a[],int low,int high)
{
	int temp=a[low];
	while(low<high)
	{
		while(low<high && temp<=a[high]) high--;
		a[low]=a[high];
		while(low<high && temp>=a[low]) low++;
		a[high]=a[low];
	}
	a[low]=temp;
	return low;
}

void qsort(int a[],int low,int high)
{
	int m;
	if(low<high)
	{
		m=qpass(a,low,high);
		qsort(a,low,m-1);
		qsort(a,m+1,high);
	}
}


int main()
{
	int i;
	scanf("%d",&n);
	for(i=1;i<=n;i++) scanf("%d",&a[i]);
	qsort(a,1,n);
	for(i=1;i<=n;i++) printf("%d ",a[i]);
}
