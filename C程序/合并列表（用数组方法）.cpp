#include<stdio.h>
int main()
{
	int z,k,t,i,j,n,m,a[10000],b[10000],c[10000];
	scanf("%d %d",&n,&m);
	z=m+n;
	for(i=1;i<=n;i++) scanf("%d",&a[i]);
	for(i=1;i<=m;i++) scanf("%d",&b[i]);
	for(i=1;i<=n;i++) c[i]=a[i];
	for(j=1;j<=m;j++,i++) c[i]=b[j];
	for(i=1;i<=z;i++)
	{
		for(j=1;j<=z-i;j++)
		{
			if(c[j]>c[j+1])
			{
				t=c[j];
				c[j]=c[j+1];
				c[j+1]=t;
			 } 
		}
	}
	for(i=1;i<=z;++i)	
	{
        for(j=i+1;j<=z;++j)	
            if(c[i]==c[j])	
            {
                for(k=j;k<=z;++k)	
                    c[k]=c[k+1];
                --z;             
    		    --j;			
   	   		}
   }
	for(i=1;i<=z;i++)
	{
		printf("%d ",c[i]);
	}
	 return 0;
} 
