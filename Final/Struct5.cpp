#include <stdio.h>
#include <conio.h>

struct ders_bilgileri
{
	char gun[20];
	int saat;
};
struct ogretim_elemanlari
{
	char dersadi[30];
	char dershocasi[30];
	struct ders_bilgileri ders;
};
struct universite
{
	char fakulteadi[30];
	char bolumadi[30];
	struct ogretim_elemanlari eleman;
} kayit[2];

main()
{
	for(int i=0; i<2;i++)
	{
		printf("Fakulte Adi  : ");
		scanf("%s",&kayit[i].fakulteadi);
		printf("Bolum Adi  : ");
		scanf("%s",&kayit[i].bolumadi);
		printf("Ders Adi  : ");
		scanf("%s",&kayit[i].eleman.dersadi);
		printf("Ders Hocasi  : ");
		scanf("%s",&kayit[i].eleman.dershocasi);
		printf("Ders Gunu  : ");
		scanf("%s",&kayit[i].eleman.ders.gun);
		printf("Ders Saati  : ");
		scanf("%d",&kayit[i].eleman.ders.saat);
	}
	
	for(int i=0; i<2; i++)
	{
		printf("%s Fakultesinde ; \n",kayit[i].fakulteadi);
		printf("%s bolumu ",kayit[i].bolumadi);
		printf("%s dersi ",kayit[i].eleman.dersadi);
		printf("%s hocanin ",kayit[i].eleman.dershocasi);
		printf("%s gununde ",kayit[i].eleman.ders.gun);
		printf("%d saatinde girmektedir.\n ",kayit[i].eleman.ders.saat);	
	}
	
}
