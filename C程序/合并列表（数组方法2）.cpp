#include<stdio.h> 
#define maxsize 10001
int main()
{
	int n,m,i,x,z,j;
	int a[maxsize],b[maxsize];
	int c[20002];
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=m;i++)
	{
		scanf("%d",&b[i]);
	}
	 i=1;
	 j=1;
	 int k=1;
	while(i<=n&&j<=m)
	{if(a[i]>b[j])
	   {
	   c[k]=b[j];
	   k++;
	   j++;
       }
     else if(a[i]==b[j])  
     {
     	c[k]=a[i];
     	k++;
     	i++;
     	j++;
    }
    else
    {
    	c[k]=a[i];
    	k++;
    	i++;
	}
	}
	if(i>n)
	{
     while(j<=m)
     {
	 c[k]=b[j];
     k++;
     j++;
	 }
	}
	if(j>m)
	{
		while(i<=n)
		{
			c[k]=a[i];
			k++;
			i++;
		}
	}
	z=k-1;
	for(k=1;k<=z;k++)
	printf("%d ",c[k]);
	return 0;
}
