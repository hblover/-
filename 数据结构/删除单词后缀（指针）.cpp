#include<stdio.h>
#include<string.h>
int main()
{
    char a[32];
    char *p;
    gets(a);
    p=a;
    if(strlen(a)<4)
        printf("%s",a);
    else
    {
            if(strcmp(p+strlen(a)-3,"ing")==0)
        a[strlen(a)-3]='\0';
        p=a;
    if(strcmp(p+strlen(a)-2,"er")==0)
        a[strlen(a)-2]='\0';
        p=a;
    if(strcmp(p+strlen(a)-2,"ly")==0)
        a[strlen(a)-2]='\0';
        printf("%s",a);
    }
 
    return 0;
}

