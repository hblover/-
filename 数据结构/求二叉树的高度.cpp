#include<stdio.h>
int main()
{
	int a[1001]={0},d,b,c,n,i,count=1,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&d,&b,&c);
		if(b!=-1) a[b]=d;//�����һ����Ϊһ�����飬��������ĳ��ȼ��� 
		if(c!=-1) a[c]=d; 
	}
	k=n-1;
	while(k!=0)
	{
		k=a[k];
		count++;
	}
	printf("%d",count);
	return 0;
}
