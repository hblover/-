#include<stdio.h>
int main()
{
	int j=0,i,n,a[10000],x;
	scanf("%d",&n);
	scanf("%d",&x);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	int low=1,high=n,mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==x) break;
		if(a[mid]<x) low=mid+1;
		if(a[mid]>x)	high=mid-1; 
		j++;
	}
	if(low<=high) printf("%d",j+1);
	else printf("0");
	return 0; 
} 
