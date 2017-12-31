// 1 den 100 e kadar olan sayýlarýn ortalamasý
#include <stdio.h>
#include <conio.h>

void tektoplam();
void cifttoplam();
main()
{
    tektoplam();
	cifttoplam();
}
void  tektoplam()
{
	int tektop=0;
	for(int i=50;i<=150;i++)
	{
		if(i%2==0)
		tektop+=i;
		
	}
	printf("teklerin toplami  :  %d \n",tektop);
}
void  cifttoplam()
{
	int cifttop=0;
	for(int i=50;i<=150;i++)
	{
		if(i%2!=0)
		cifttop+=i;
		
	}
	printf("ciftlerin toplami  :  %d \n",cifttop);
}
