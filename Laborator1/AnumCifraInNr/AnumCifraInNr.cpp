#include<stdio.h>
void main(void)
{
	int n,cifra,ultima_cifra,numar_aparitii=0;
	printf("Intr numarului=");
	scanf("%d",&n);
	printf("introduceti cifra=");
	scanf("%d",&cifra);
	do
	{
		ultima_cifra=n%10;
		if(ultima_cifra==cifra)
			numar_aparitii++;
		n=n/10;
	}while(n);
	printf("Numarul de aparitii este %d\n",numar_aparitii);
}