#include<stdio.h>
void main(void)
{
	int a,b,c,n;
	printf("pana la ce numar doriti sa mergem=");
	scanf("%d",&n);
	a=1;
	b=1;
	printf("%d%d",a,b);
	c=a+b;
	while(c<=n)
	{
		printf("%d",c);
		a=b;
		b=c;
		c=a+b;
	}
}