#include <stdio.h>
#include <conio.h>

struct kayit
{
	char isim[20];
	int no;
	int sinif;
};

main()
{
	struct kayit ogrenci;
	printf("no : ");
	scanf("%d",&ogrenci.no);
	printf("isim : ");
	scanf("%s",&ogrenci.isim);
	printf("Sinif : ");
	scanf("%d",&ogrenci.sinif);
	printf("\n Girilen Ogrenci");
	printf("\n No : %d",ogrenci.no);
	printf("\n Isim : %s",ogrenci.isim);
	printf("\n Sinif : %d",ogrenci.sinif);
	

}
