#include<stdio.h>
#include<math.h>
int main()
{
	int z,k,t,a,b,x[10000],y[10000];
	float z1,z2;
	scanf("%d",&k);
	for(int i=1;i<=k;i++)
	{
		scanf("%d %d\n",&x[i],&y[i]);
	} 
	for(int i=1;i<=k;i++)
	{
		if(x[i]>y[i])
		{
		   t=x[i];
		   x[i]=y[i];
		   y[i]=t;	
		}
		z1=sqrt(y[i]*y[i]-x[i]*x[i]);
		z2=sqrt(y[i]*y[i]+x[i]*x[i]);
		a=(int)z1;
		b=(int)z2;
		if(z1-a==0&&z2-b==0) 
		{
			if(a>b) printf("%d\n",b);
			if(a<b) printf("%d\n",a);
		}
		else if(z2-b==0&&z1-a!=0)
		{
			printf("%d\n",b);
		}
		else if(z2-b!=0&&z1-a==0)
		{
			printf("%d\n",a);
		}
		else printf("None\n");
	}
 } 
