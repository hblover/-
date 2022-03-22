#include<stdio.h> 
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int h=n/3600;
		int m=(n%3600)/60;
		int s=n%3600%60;
		printf("%02d:%02d:%02d\n",h,m,s);
	 } 
}
