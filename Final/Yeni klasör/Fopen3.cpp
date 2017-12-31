#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()
{
	FILE *ogrencinotlar;
	char ad[20];
	int nosu=0, notu=0;
	ogrencinotlar=fopen("a.txt","r");
	while(!feof(ogrencinotlar))
	{
		fscanf(ogrencinotlar,"%d\t%s\t%d \n",&nosu,&ad,&notu);
		
		printf("%d\t%s\t%d\n",nosu,ad,notu);
		
	}
	fclose(ogrencinotlar);
	getch();
}
