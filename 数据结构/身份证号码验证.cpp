#include<stdio.h>
#include<string.h>
int main()
{
	int n,m=0; 
	scanf("%d\n",&n);
	while(n--)
	{
		int b[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2,1},c[18]; 
		int sum=0;
		char a[20];
		gets(a);
		for(int i=0;i<18;i++)
		{
			if(a[i]=='x'||a[i]=='X') 
			{
				sum+=10*b[i]; 
				break;
			}
			else
			 sum+=b[i]*(a[i]-48);
		}
		if(sum%11==1) m++;
	}
	printf("%d",m);
	return 0;
}




//***430321200506200105
  //430321200505070050
 // 430302200512290036
 //  43038120050824012X

