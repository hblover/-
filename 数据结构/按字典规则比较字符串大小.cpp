#include<stdio.h> 
#include<string.h>
int main()
{
	char a[1002],b[1002];
	gets(a);
	gets(b);
	int m=0;
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]>'Z' && !(a[i]-32==b[i] || a[i]+32==b[i]) && a[i]!=b[i]) a[i]=a[i]-32;
		if(b[i]>'Z' && !(a[i]-32==b[i] || a[i]+32==b[i]) && a[i]!=b[i]) b[i]=b[i]-32;
		if(a[i]>b[i])
		{
			m=1;
			break;
		}
		if(a[i]<b[i])
		{
			m=-1;
			break;
		}	
	}
	printf("%d",m); 
	return 0;
}





//we Me
