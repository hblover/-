#include<stdio.h> 
int guys(int x,int y)
{
    if(y==0)return x;
    else return guys(y,x%y);//求这些数组的公因数 
}
int main()
{   char s[1001];int i,max,j,z,p;
    while(scanf("%s",s)!=EOF)
    {
        int a[27]={0};
        for(i=0;s[i]!='\0';i++)
        {
            a[s[i]-65]++;
            p=a[s[i]-65];
        }
        for(i=0;i<26;i++)
        {
            if(a[i]=='\0')continue;
            p=guys(a[i],p);
        }
        for(i=0;i<26;i++)
        a[i]=a[i]/p;
        max=a[0];
        for(i=0;i<26;i++)
        {
            if(a[i]>max)
            max=a[i];
        }
        for(i=max;i>0;i--)
        {   z=0;
            for(j=0;j<26&&z!=26;j++)
            {
                if(a[j]=='\0')continue;
                else if(a[j]>=i)
                {
                    printf("*");
                    for(z=j+1;z<26;z++)
                     {
                         if(a[z]<i)continue;
                         else break;
                     }
                }
                else
                printf(" ");
            }
            printf("\n");
        }
            for(i=0;i<26;i++)
            {   if(a[i]=='\0')continue;
                else printf("%c",i+65);
            }
            printf("\n\n"); 
        }
    return 0;
}
