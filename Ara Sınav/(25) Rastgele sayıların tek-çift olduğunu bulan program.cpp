/*67 ile 182 sayýlarý arasýnda rastgele üretilen 10 adet sayýyý
ekranda tek,çift þeklinde gösteren ve çift olanlarýn ortalamasýný ekrana 
yazdýran program. */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int sayi,toplam,sayac=0;
	srand(time(NULL));
	for(int i=0; i<10;i++)
	{
		sayi=67+rand()%115;
		if(sayi%2==0)
		{
		
			printf("%d Cift sayi\n",sayi);
			toplam=toplam+sayi;
			sayac=sayac+1;
		}
		else
			printf("%d Tek sayi \n",sayi);
		
	}
	
	printf("Cift sayilarin ortalamasi = %d",toplam/sayac);
	
	getch();
}
