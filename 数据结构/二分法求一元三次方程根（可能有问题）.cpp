#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,d;//�ĸ�ϵ��
	double m,n;//������Χ
	double f1,f2;//�˵������ֵ
	double i,sum;//��ʾ�������� 
	double min=1e-7;
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	scanf("%lf%lf",&m,&n);
	f1=a*m*m*m+b*m*m+c*m+d;
	f2=a*n*n*n+b*n*n+c*n+d;
	if(f1*f2<0)
	{
		while(fabs(m-n)>min))
		{
			i=(m+n)/2;
			sum=a*i*i*i+b*i*i+c*i+d;
			if(fabs(sum)<min)
			{
				printf("%lf",i);
				break;
			}
			else if(f1*sum<0) n=i;
			else if(f2*sum<0) m=i;
		}
	}
	else if(f1*f2==0)
	{
		if(f1==0) printf("%lf",m);
		if(f2==0) printf("%lf",n);
	}
	return 0;
 } 
