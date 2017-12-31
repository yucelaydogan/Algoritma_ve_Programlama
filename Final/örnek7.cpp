#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
main()
{
 srand(time(NULL));
 int dizi[5];
 for(int i=0;i<5;i++)
 {
 	if(i==0)
 	dizi[0]=100+rand()%900;
 	else
 	dizi[i]=dizi[i-1]+rand()%(1000-dizi[i-1]);
 }
 for(int i=0;i<5;i++)
 printf("%d\n",dizi[i]);
 getch();
	
}
