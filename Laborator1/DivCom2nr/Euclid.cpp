#include<stdio.h>
void main(void)
{
	int a,b,r;
	printf("Introduceti primul numar=");
	scanf("%d",&a);
	printf("Introduceti al doilea numar=");
	scanf("%d",&b);
	while(r=a%b)
	{
		a=b;
		b=r;
	}
	printf("cmmdc este %d\n",b);
}