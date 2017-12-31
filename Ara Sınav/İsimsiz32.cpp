#include <stdio.h>
#include <conio.h>

main()
{
	int son=5;
	int bosluk=1;
	
	for(int i=0; i<5; i++)
	{
		for(int a=0; a<bosluk; a++)
		printf(" ");
		
		for(int b=1; b<=son; b++)
		printf("%d",b);
		
		printf("\n");
		son--;
		bosluk++;
		
		
	}
	
	int son2=5;
	int bosluk2=5;
	
	for(int i=0; i<5; i++)
	{
		for(int a=0; a<bosluk2; a++)
		printf(" ");
		
		for(int b=son2; b<=5; b++)
		printf("%d",b);
		
		printf("\n");
		son2--;
		bosluk2--;
		
		
	}
	
	
	getch();
	
}
