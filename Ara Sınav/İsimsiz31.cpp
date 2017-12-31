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
		
		for(int b=son; b>=1; b--)
		printf("%d",b);
		
		for(int c=1; c<=son; c++)
		printf("%d",c);
		printf("\n");
		
		son--;	
		bosluk++;
		
		
	}
	
	getch();
	
}
