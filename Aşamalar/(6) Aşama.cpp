#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
    char kelime[20];
    printf("bir kelime girin");
    scanf("%s",kelime);
    printf("girilen kelime  : %s",kelime);
    getch();
    
	
}
