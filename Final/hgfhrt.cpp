// 1 den 100 e kadar olan sayýlarýn ortalamasý
#include <stdio.h>
#include <conio.h>

int ort();

main()
{
     int ortalama=0;
	ortalama=ort();
	printf("Ortalama = %d",ortalama);
	getch();
}
int ort()
{
int toplam=0;
int ortalamasi=0;
for(int i=1;i<=100;i++)
   toplam+=i;
   
   	ortalamasi=toplam/100;
   	return ortalamasi;

}
