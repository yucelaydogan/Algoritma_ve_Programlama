// 1 den 100 e kadar olan sayıların ortalaması
#include <stdio.h>
#include <conio.h>

void  goster(int a,int b);
main()
{
	int x,y;
	printf("sayi gir");
	scanf("%d",&x);
	printf("sayi gir");
	scanf("%d",&y);
	goster(x,y);
	getch();
}
void goster(int a,int b)//a=x b=y
{
if(a>b)
printf("ilk girilen sayi ikinci girilen sayidan daha buyuktur");
else
printf("ikinci girilen sayi ilk girilen sayidan daha buyuktur");
}
