#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <string.h>
main()
{
	char cumle[100];
	printf("bir cumle giriniz");
	gets(cumle);
	int sayac=0;
	for(int i=0;i<strlen(cumle);i++)
	if(cumle[i]=='a')
	sayac++;
	printf("\n girilen cumlede %d adet a harfi vardýr",sayac);
	
	
	
	getch();
	
}
