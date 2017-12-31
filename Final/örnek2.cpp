#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <string.h>
main()
{
	char kelime[100];
	printf("bir kelime giriniz");
	scanf("%s",&kelime);
	int uzunluk=0;
	uzunluk=strlen(kelime);
	printf("\n%d harf",uzunluk);
	for(int i=0;i<uzunluk;i++)
	printf("\n%c",kelime[i]);
	
	
	
	getch();
	
}
