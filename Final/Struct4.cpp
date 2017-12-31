#include <stdio.h>
#include <conio.h>

struct dogum_tarihi
{
	int gun,ay,yil;
	
};

struct sahis_bilgileri
{
	char isim[50];
	int boy;
	struct dogum_tarihi tarih;
} kisi[3];

main()
{
	for(int i=0;i<3;i++)
	{
		
		printf("Isim : ");
		scanf("%s",&kisi[i].isim);
		printf("Boy : ");
		scanf("%d",&kisi[i].boy);
		printf("Dogum Gunu  : ");
		scanf("%d",&kisi[i].tarih.gun);
		printf("Dogum Ayi  : ");
		scanf("%d",&kisi[i].tarih.ay);
		printf("Dogum Yili  : ");
		scanf("%d",&kisi[i].tarih.yil);
			
	}
	for(int i=0;i<3;i++)
	{
		printf("\n Isim : %s",kisi[i].isim);
		printf("\n Boy : %d",kisi[i].boy);
		printf("\n Dogum Tarihi  : %d/%d/%d",kisi[i].tarih.gun,kisi[i].tarih.ay,kisi[i].tarih.yil);	
		
	}
	
		
	
	

}
