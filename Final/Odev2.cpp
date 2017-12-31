#include <stdio.h>
#include <math.h>
#include <conio.h>

main()
{
	int bas=1;
	int son=7;
	int bosluk=1;
	
	for(int i=0; i<4; i++)
	{
		for(int a=0; a<bosluk; a++)
		printf(" ");
		
		for(int b=bas; b<=son; b++)
		printf("%d",b);
		
		printf("\n");
		
		bas++;
		son--;	
		bosluk++;
		
		
	}
	
	int bas2=7;
	int son2=1;
	int bosluk2=1;
	
	for(int i=0; i<4; i++)
	{
		for(int a=0; a<bosluk2; a++)
		printf(" ");
		
		for(int b=bas2; b>=son2; b--)
		printf("%d",b);
		
		printf("\n");
		
		bas2--;
		son2++;	
		bosluk2++;
		
		
	}
	
	
	
	
	getch();
}
