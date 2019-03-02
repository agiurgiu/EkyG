#include<stdio.h>

void main(void)
{
	float a, b, x;
	printf("Introduceti valoarea lui a=");
	scanf("%f",&a);
	printf("Introduceti valoarea lui b=");
	scanf("%f",&b);
	if(a==0) 
		if(b==0) 
			printf("ecuatie nedeterminata\n");
		else
			printf("ecuatie imposibila\n");
		else
		{	x=-b/a;
			printf("ec gr1 cu solutia %f\n",x);
		}
}