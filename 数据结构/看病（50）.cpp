#include<stdio.h>
char a[1000][100],ch[1000][4];
int b[1000];
int main()
{
	int n;
	int i,j=1,k,max=-10000000000,kk,num=0;
	scanf("%d",&n);
	for(i=0;i<n;)
	{
		while(scanf("%s",&ch[++i]) && ch[i][1]=='u')
		{
			scanf("%s",&a[j]);
			scanf("%d",&b[j]);
			j++;
			num++;
		}
		for(k=1;k<=j-1;k++)
		{
			if(max<b[k]) 
			{
				max=b[k];
				kk=k;
			}
		}
		if(num==0) 
		{
			printf("none\n");max=-10000000000;
		}
		else 
		{
			printf("%s %d\n",a[kk],max);
			b[kk]=-10000000000;num--;
			max=-10000000000;
		}
	}
}
