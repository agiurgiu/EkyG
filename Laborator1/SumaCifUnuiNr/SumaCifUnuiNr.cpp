#include<stdio.h>
void main(void)
{
	int n,ultima_cifra,suma=0;
	printf("Intr numarului=");
	scanf("%d",&n);
	do 
	{

		ultima_cifra=n%10;
		suma=suma+ultima_cifra;
		n=n/10;
	}while(n);
	printf("Suma cifrelor este %d\n",suma);
}
