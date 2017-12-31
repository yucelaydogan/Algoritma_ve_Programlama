#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

main()
{
	
	setlocale(LC_ALL,"Turkish");
	
//KLAVYEDEN GÝRÝLEN BÝR SAYI 50 ÝLE 200 SAYILARI ARASINDAKÝ SAYILARDAN KAÇ TANESÝNE KALANSIZ BÖLDÜGÜNÜ EKRANDA GÖSTEREN PROGRAM 

int sayi=0;
int adet=0;
printf("sayi girin");
scanf("%d",&sayi);
for(int i=50;i<200;i++)
if(i%sayi==0)
adet++;

printf("%d adet sayý kalasnsýz böler",adet);
	



	


	
	
	
	
	
	
	
	
	
	
	
	getch();
	

}
