#include <stdio.h>
#include <math.h>
#include <conio.h>

main()
{
	
	
	
	int adet=7;
	int adet2=3;
	
	int bosluk2=1;
	int bosluk=1;
	
	for(int i=0;i<6;i++)
	{
		for (int a=adet;a>=1;a--)
		printf("%d",a);
		for(int j=0;j<bosluk;j++)
		printf(" ");
		adet--;
		bosluk+=2;
		
		for(int c=adet2; c<=9; c++)
		printf("%d",c);
		for(int j=0;j<bosluk2;j++)
		printf(" ");
		adet2++;
		bosluk2--;
		
		
		printf("\n");
	
	}
	
	
	
	getch();
}
