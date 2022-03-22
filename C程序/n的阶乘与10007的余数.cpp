#include<stdio.h>
int main()
{
  int i,n,s;
  while(scanf("%d",&n))
  {
  	s=1;
  	if(n==-1)
  		return 0;
  	for(i=1;i<=n;i++)
  	{
		s=(s*i)%10007;
  	}
	printf("%d\n",s);
  }
}

