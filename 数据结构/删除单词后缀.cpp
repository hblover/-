#include<stdio.h>
#include<string.h>
int main()
{
	char a[40];
	gets(a);
	if(strlen(a)<4) printf("%s",a);
	else
	{
		if(a[strlen(a)-3]=='i'&&a[strlen(a)-2]=='n'&&a[strlen(a)-1]=='g')
			a[strlen(a)-3]='\0';
		if(a[strlen(a)-2]=='e'&&a[strlen(a)-1]=='r')
			a[strlen(a)-2]='\0';
		if(a[strlen(a)-2]=='l'&&a[strlen(a)-1]=='y')
			a[strlen(a)-2]='\0';
		printf("%s",a);
		 
	}
}
