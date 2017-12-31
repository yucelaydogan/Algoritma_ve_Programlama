#include <stdio.h>
#include <conio.h>

main()
{
	int adet=9;
	int bosluk=5;
	for(int i=0; i<5; i++)
	{
		for(int a=0; a<bosluk; a++)
		printf(" ");
		
		for(int j=0; j<adet; j++)
		printf("*");
		
		adet-=2;
		bosluk++;
		printf("\n");
		
	}
	
	adet=1;
	bosluk=9;
	for(int w=0; w<5; w++)
	{
		for(int k=0; k<bosluk; k++)
		printf(" ");
		
		for(int z=0; z<adet; z++)
		printf("*");
		printf("\n");
		adet+=2;
		bosluk--;
		
		
	}
	
	
	getch();
}
