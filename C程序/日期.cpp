#include<stdio.h>
int a,b,c;
int leap(int a)
{
	if(a%100==0)
	{
		if(a%400==0) return 1;
		else return 0;
	}
	else
	{
		if(a%4==0) return 1;
		else return 0;
	}
}

int month(int b)
{
	if(b==1 || b==3 || b==5 || b==7 || b==8 || b==10 || b==12) return 31;
	if(b==4 || b==6 || b==9 || b==11) return 30;
	if(leap(a) && b==2) return 29;
	if(!leap(a) && b==2) return 28; 
}

int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int sum=0;
		scanf("%d-%d-%d",&a,&b,&c);
		for(int i=1;i<=b-1;i++)
		{
			sum=sum+month(i);
		}
		sum=sum+c;
		printf("%d\n",sum);
	}
}
