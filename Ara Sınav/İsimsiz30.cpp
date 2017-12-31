#include <stdio.h>
#include <conio.h>

main()
{
	int son=5;
	for(int a=0; a<5; a++)
	{
		for(int i=1; i<son; i++)
		printf("%d",i);
		
		son--;
		printf("\n");
		
	}
	
	getch();
	
}
