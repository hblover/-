#include<stdio.h>
#include<math.h>
int main()
{
    __int64 n,m,num,i,sum;
    int k;
    scanf("%d",&k);
    while(k--)
    {
        scanf("%I64d %I64d",&n,&m);
        sum=1;
        i=n;
        while(i--)
            sum*=10;
        sum--;
        num=sum/m-sum/10/m;
        if(n==1) 
            num+=1;
        printf("%I64d\n",num);
    }
    return 0;
}
