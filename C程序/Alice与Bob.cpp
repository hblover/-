#include<stdio.h>
#include<math.h>
int main()
{   
    __int64 n,m,a,b,sum;
    int K;
	scanf("%d",&K);
	for(int i=1;i<=K;i++)
	{
	  scanf("%I64d %I64d",&n,&m);
	  a=pow(10,n)-1;
	  b=pow(10,n-1)-1;
	  sum=a/m-b/m;
	  if(n==1) sum++;
	 printf("%I64d\n",sum);
	 }
	return 0;	
}
