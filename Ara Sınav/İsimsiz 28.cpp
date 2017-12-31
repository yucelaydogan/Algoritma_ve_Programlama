#include <stdio.h>
#include <math.h>
#include <conio.h>

main()
{
	
	
	
	int adet=9;
	int bosluk=1;
	for(int i=0;i<5;i++)
	{
		for (int a=0;a<bosluk;a++)
		printf(" ");
		for(int j=0;j<adet;j++)
		printf("*");
	
		adet-=2;
		bosluk++;
		printf("\n");
	}
	
	adet=1;
	bosluk=5;
	for(int i=0;i<5;i++)
	{
		for (int a=0;a<bosluk;a++)
		printf(" ");
		for(int j=0;j<adet;j++)
		printf("*");
		
		adet+=2;
		bosluk--;
		printf("\n");
	}



	getch();
	


	

}
