#include<stdio.h>
#include<string.h>
int main()
{
	char a[1001];
	char b[27];
	for(int i=0;i<26;i++)
	{
		b[i]='A'+i;
	}
	while(scanf("%s",&a)!=EOF)
	{
		int i,j;
		for(i=0;i<26;i++)
		{
			for(j=0;a[i]!='\0';j++)
			{
				if(b[i]==a[j] || a[j]==b[i]+32) break;
			}
			if(j>strlen(a)) 
			{
				printf("No\n");
				break;
			} 
		}
		if(i>=26) printf("Yes\n");
	}
	return 0;
}
