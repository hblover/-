#include<stdio.h>
int main()
{
    int n,m,a[101],out=0,num=0,i;//outΪ���ֵĺ���
    scanf("%d %d",&n,&m); 
    for(i=1; i<=n; i++)
    {
        a[i]=0;//�����к��Ӹ�ֵΪ0
    }
    i=1;
    while(out!=n-1)//ʣ�����һֻ���ӽ���ѭ��
    {
        if(a[i]==0)
        {
            num++;
        }
        if(num==m)
        {
            num=0;//num���¼���
            a[i]=1;
            out++;
        }
        i++;
        if(i==n+1)//���һ�����Ӽ��������¼���
        {
            i=1;
        }
    }
    for(i=1; i<=n; i++)
    {
        if(a[i]==0)
        {
            printf("%d",i);//��Ϊi��0����������ֵ��1Ϊ���һֻ���ӵı��
            break;
        }
    }
    return 0;
}
