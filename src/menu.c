#include <stdlib.h>
#include <stdio.h>
#include <graphics.h>
#include <iostream>
using namespace std;
int Menu();
int main()
{
	int n;
	n=Menu();
	cout<<n;
	system("PAUSE");
    return 0;
}int Menu()
{
	int n=1, i;
    char ch;
    initwindow(1000,1000);
    while (1)	
	{ 
    	do 
		{ 
        	setcolor(2);
        	for (i=1; i<=3; i++)
		  	{
            	settextstyle(GOTHIC_FONT, HORIZ_DIR, 7);
            	switch(i)
            	{
					case 1: outtextxy (300,100+i*100," Play"); break;
                	case 2: outtextxy (300,100+i*100," Check"); break;
                	case 3: outtextxy (300,100+i*100," Exit"); break;
                	default: break;
                }
        	}
            setcolor(4);
            switch(n)
        	{
				case 1: outtextxy (300,100+n*100," Play"); break;
               	case 2: outtextxy (300,100+n*100," Check"); break;
               	case 3: outtextxy (300,100+n*100," Exit"); break;
              	default: break;
			}
        	ch=getch();
        	if (ch==72) n--;
        	if (n<=0) n=3;
        	if (ch==80) n++;
        	if (n>3) ;
        } 
		while (ch!=13);
        cleardevice();
    }   
	system("PAUSE");
    return 0;
}
