#include <stdio.h>
#include <conio.h>

struct kayit
{
	char isim[20];
	int no;
	int yas;
} ogrenci[5];

main()
{
	for(int i=0;i<5;i++)
	{
		printf("no : ");
		scanf("%d",&ogrenci[i].no);
		printf("isim : ");
		scanf("%s",&ogrenci[i].isim);
		printf("Yas : ");
		scanf("%d",&ogrenci[i].yas);
		
	}
	
	for(int i=0;i<5;i++)
	{
		printf("\n Girilen Ogrenci");
		printf("\n No : %d",ogrenci[i].no);
		printf("\n Isim : %s",ogrenci[i].isim);
		printf("\n Yas : %d",ogrenci[i].yas);
		
	}
	

	
	

}
