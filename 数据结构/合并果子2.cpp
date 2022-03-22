#include<stdio.h>
void Sequence(int a[],int n)
{
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
	}
}
int main()
{
	int m=0,k,n,a[30000],b[30000],sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);	
	while(n>1)
	{
		Sequence(a,n);
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
