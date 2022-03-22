#include <stdio.h>
#include <stdlib.h>
#include <string.h>
double n,m,a,b,c,d;
double func(double x)
{
	return x*x*x*a+x*x*b+x*c+d;
}
int main()
{	
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	int i,j;
	scanf("%lf%lf",&m,&n);
	if (func(m) == 0){
		printf("%.6f",m);
	}
	while (n - m >= 0.0000001)
	{
		double x = (n+m)/2;
		if (func(m) * func(x) <= 0)
			n = x;
		else m = x;
	}
	printf("%.6f",m);
	return 0;
	
}
