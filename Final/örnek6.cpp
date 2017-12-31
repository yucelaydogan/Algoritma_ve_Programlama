#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
main()
{
srand(time(NULL));
int dizi[15];
int sayac=0;
int toplam=0;
for(int i=0;i<15;i++)
dizi[i]=10+rand()%250;
for(int i=0;i<15;i++)
{
	for(int a=2;a<dizi[i];a++)
	if(dizi[i]%a==0)
	sayac++;
	if(sayac==0)
	{

	printf("%d\n",dizi[i]);
	toplam+=dizi[i];
	}
}
printf("asal sayilarin toplami =%d",toplam);

	
	
	getch();
	
}
