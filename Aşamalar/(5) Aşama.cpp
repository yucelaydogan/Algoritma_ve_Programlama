#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
    int sayi;
    printf("bir sayý girin");
    scanf("%d",&sayi);
    printf("girilen sayi=%d",sayi);
    getch();
    
	
}
