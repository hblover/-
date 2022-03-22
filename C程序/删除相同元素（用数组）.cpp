#include<stdio.h> 
int main()
{
	int j,k,n,i,a[10000];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=1;i<=n;++i)	
	{
        for(j=i+1;j<=n;++j)	
            if(a[i]==a[j])	
            {
                for(k=j;k<=n;++k)	
                    a[k]=a[k+1];
                --n;             
    		    --j;			
   	   		}
    }
    for(i=1;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
	 return 0;
}
