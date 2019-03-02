#include<stdio.h>
#include<math.h>

void main(void)
{
	float a, b, c, d, re, im, x1, x2, x;
	printf("Introduceti valoarea lui a=");
	scanf("%f",&a);
	printf("Introduceti valoarea lui b=");
	scanf("%f",&b);
	printf("Introduceti valoarea lui c=");
	scanf("%f",&c);
	if(a==0)
		if(b==0)
			if(c==0)
				printf("ecuatie nedeterminata\n");
			else
				printf("ecuatie imposibila\n");
		else
		{	x=-c/b;
			printf("ec gr1 cu solutia%f\n",x);
		}
	else
	{
		d=b*b-4*a*c;
		if(d==0)
		{
			re=-b/(2*a);
			im=sqrt(-d)/(2*a);
			printf("sol complexe: x1=%f+i*%f si x2=%f-i*%f\n",re,im,re,im);
		}
		else
			if(d==0)
			{
				x=-b/(2*a);
				printf("sol dubla egala x1=x2=%f\n",x);
			}
			else
			{
				x1=(-b+sqrt(d))/(2*a);
				x2=(-b-sqrt(d))/(2*a);
				printf("sol reale distincte x1=%f si x2=%f\n", x1,x2);
			}
	}
}
