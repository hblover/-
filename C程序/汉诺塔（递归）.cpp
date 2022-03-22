#include<stdio.h>
void move(int m,char from,char to)
{
	printf("%c->%d->%c\n",from,m,to);
}
void hanoi(int n,char from,char mid,char to)
{
	if(n==1) move(1,from,to);
	else
	{
		hanoi(n-1,from,to,mid);
		move(n,from,to);
		hanoi(n-1,mid,from,to);
	}
}

int main()
{
	int n;
	char from,mid,to;
	scanf("%d %c %c %c",&n,&from,&to,&mid);	
	hanoi(n,from,mid,to);
}  
