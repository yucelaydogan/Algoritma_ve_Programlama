#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <string.h>
main()
{
	char cumle[100];
	printf("bir cumle giriniz :");
	gets(cumle);
	int sayac=1;
	for(int i=0;i<strlen(cumle);i++)
	if(cumle[i]==' ')
	sayac++;
	printf("\n girilen cumlede %d adet kelime vardir",sayac);
	
	
	
	getch();
	
}
