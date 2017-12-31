#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"Turkish");
   int sayi1,sayi2;
    printf("birinci sayiyi girin  :");
    scanf("%d",& sayi1);
    printf("ikinci sayýyý girin  :");
    scanf("%d",& sayi2);
    if(sayi1 > sayi2)
	
    	printf("birinci sayý ikinci sayýdan büyüktür");
    	
    	else{
    		printf("ikinci sayý daha büyüktür");
		}
	
	
    getch();
	
}
