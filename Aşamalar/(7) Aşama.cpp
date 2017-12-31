#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
    char ifade[20];
    printf("bir kelime girin   :   ");
    gets(ifade);
    printf("girilen deðer  : %s",ifade);
    getch();
    
	
}
