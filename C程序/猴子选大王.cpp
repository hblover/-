#include<stdio.h>
int main()
{
    int n,m,a[101],out=0,num=0,i;//out为出局的猴子
    scanf("%d %d",&n,&m); 
    for(i=1; i<=n; i++)
    {
        a[i]=0;//将所有猴子赋值为0
    }
    i=1;
    while(out!=n-1)//剩余最后一只猴子结束循环
    {
        if(a[i]==0)
        {
            num++;
        }
        if(num==m)
        {
            num=0;//num重新计数
            a[i]=1;
            out++;
        }
        i++;
        if(i==n+1)//最后一个猴子计数完重新计数
        {
            i=1;
        }
    }
    for(i=1; i<=n; i++)
    {
        if(a[i]==0)
        {
            printf("%d",i);//因为i从0计数，所以值加1为最后一只猴子的编号
            break;
        }
    }
    return 0;
}
