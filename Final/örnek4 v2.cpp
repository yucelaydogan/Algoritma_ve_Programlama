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
	int sayac=0;
	for(int i=0;i<strlen(cumle);i++)
	{
		printf("%c",cumle[i]);
		if(cumle[i]==' ')
		  {
		  	printf("\n");
		  	sayac++;
		  }
	}
	printf("\n girilen cumlede %d adet kelime vardir ",sayac+1);

	
	
	getch();
	
}
