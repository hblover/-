#include<stdio.h>
int c[1000001];
void f()//先将所有素数标记 
{
	int i,j;
	for(i=0;i<=1000000;i++)
	{
		if(i%2==0) c[i]=0;  //令所有偶数为零 
		else c[i]=1;
	}
	c[0]=c[1]=0;c[2]=1;
	for(i=3;i<=1000000;i++)
	{
		for(j=2*i;j<=1000000;j+=i)
		{
			c[j]=0; 
		}  //令所有其他非质数为零 
	}
}    //如果为质数则a[i]=1,否则a[i]=0; 
int main()
{
	int i,k,a,b,sum,t;
	scanf("%d",&k);
	f();
	while(k--)
	{
		sum=0;
		scanf("%d %d",&a,&b);
		if(a>b) 
		{
			t=a;
			a=b;
			b=t;
		}
		for(i=a;i<=b;i++)
		{
			if(c[i]==1) sum++;
		}
		printf("%d\n",sum);
	}
	return 0;
} 
