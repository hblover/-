#include<stdio.h>
int main()
{
	int a[10][10],i,j,m;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		   scanf("%d",&a[i][j]);
	}
	int r,c;
	for(r=0;r<5;r++)
	{
		c=0;
		for(j=1;j<5;j++)
		{
			if(a[r][j]>a[r][c])
			  c=j;
		}//找到每一行的最大值 
		m=1;
		for(i=0;i<5;i++)
		{
			if(a[i][c]<a[r][c]) 
			{
				m=0;
				break;	
			}//看是否是每一列的最小值 
		}
		if(m) break;
	}
	if(m) printf("%d %d %d",r+1,c+1,a[r][c]);
	else printf("not found");
	return 0;	
} 
