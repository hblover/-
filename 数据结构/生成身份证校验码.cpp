#include<stdio.h>
#include<string.h>
int main()
{
	int b[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	int m,c[]={0,1,2,3,4,5,6,7,8,9,10};
	char C[]={'1','0','X','9','8','7','6','5','4','3','2'};
	int sum=0;
	char a[20];
	gets(a);
	for(int i=0;i<17;i++)
	{
		sum+=b[i]*(a[i]-48);
	}
	for(int i=0;i<11;i++)
	{
		if(sum%11==c[i]) m=C[i];
	}
	printf("%c",m);
	return 0;
}

