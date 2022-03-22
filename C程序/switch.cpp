#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	float x,y;
	scanf("%f",&x);
	if(x>=0&&x<10)
	i=1;
	if(x>=10&&x<20)
	i=2;
	if(x>=20&&x<30)
	i=3;
	switch(i)
	{
	case 1:y=cos(x+3.0);printf("%.5f\n",y);break;
	case 2:y=cos(x+7.5)*cos(x+7.5);printf("%.5f\n",y);break;
	case 3:y=cos(x+4.0)*cos(x+4.0)*cos(x+4.0)*cos(x+4.0);printf("%.5f\n",y);break;
	default:printf("Not define\n");
	}
	return 0;
}
