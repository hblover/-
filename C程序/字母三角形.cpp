#include<stdio.h>
int main()
{
	char ch='1',i=1,j,k;
	scanf("%c",&ch);
	while(ch!='#')
	{
	    
		printf("case %d:\n",i++);
		for(j=ch;j>='A';j--)
		{
			for(k=j;k<ch;k++) printf(" ");
			for(k='A';k<=j;k++) printf("%c",k);
			for(k=j-1;k>='A';k--) printf("%c",k);
			
			printf("\n");
		}
		scanf(" %c",&ch);
	}
	return 0;
}
