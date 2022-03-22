#include<stdio.h>
int main()
{
	int n,a[1000],b[1000];//a为已知序列，b为未知序列 
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		a[i]=n-i;
		b[i]=0;
	}
    int i, j;
	for(i = 0; i < n; i++) 
  	{ //把桌上的逐张收到手上来.
		for(j = i + 1; j >= 0; j--) 
			b[j + 1] = b[j]; //先把手上的下移，腾出最上面的空.（b） 
		b[0] = a[i];  //从桌子上拿一张，放到手上的最上面.（a) 
		for(j = i + 1; j >= 0; j--)
			b[j + 1] = b[j]; //再把手上的下移，腾出最上面的空.
		b[0] = b[i + 1];  //再把手上最下面的，移到最上面.
	}
 	for(i = n-1; i>=0; i--)		
		printf("%d ", b[n-1 - i]);//输出.
}

