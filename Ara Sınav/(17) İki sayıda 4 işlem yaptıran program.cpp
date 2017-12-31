#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"Turkish");
    int sayi1,sayi2,secim;
    secim=0;
    printf("birinci sayýsý giriniz\n");
    scanf("%d",&sayi1);
    printf("ikinci sayýsý giriniz\n");
    scanf("%d",&sayi2);
    printf("***MENÜ***\n");
    printf("[1]\n");
     printf("[2]\n");
      printf("[3]\n");
       printf("[4]\n");
       scanf("%d",&secim);
       printf("seciminiz  =%d \n",secim);
       
    
    switch(secim)
	{
    case 1:
    	printf("toplam = %d",sayi1+sayi2);break;
    	case 2:
    		printf("fark  =%d",sayi1-sayi2);break;
    			case 3:
    		printf("çarpým  =%d",sayi1*sayi2);break;
    			case 4:
    				printf("bölüm  =%d",sayi1/sayi2);break;
    				
    				default:
    					printf("hatalý seçim yaptýnýz");
    					break;
    	
    		
	}
	
    
	
    getch();
	
}
