#include<stdio.h>
void main(void)
{
	int n,i,s=0;
	printf("Introduceti pe n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		s=s+i;
	printf("suma este %d\n",s);
}