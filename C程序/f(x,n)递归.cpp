#include<stdio.h>
double f(double x,double n)
{
	if(n==1) return x/(1+x);
	else return x/(n+f(x,n-1));
}

int main()
{
	double x,n;
	scanf("%lf %lf",&x,&n);
	printf("%.2lf",f(x,n));
	return 0;	
} 

