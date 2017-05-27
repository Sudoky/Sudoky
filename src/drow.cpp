#include "sudoky.h"
void drowp()
{
	int i, x=10, y=10; 
	setcolor(WHITE);
	setlinestyle (1, 1, 4);
	for(i=10;i<=640;i=i+210)
	{
		moveto(x,i); lineto(640,i);
		moveto(i,x); lineto(i,640);
	}
	for(i=10;i<=640;i=i+210)
	{
		moveto(x,i); lineto(640,i);
		moveto(i,x); lineto(i,640);
	}
	setlinestyle (1, 1, 1);
	for(i=80;i<=570;i=i+70)
	{
		if((i!=220)&&(i!=430))
		{
			moveto(x,i); lineto(640,i);
			moveto(i,x); lineto(i,640);
		}
	}	
}
void drowdiag()
{
	int i, x=50, y=50; 
	setcolor(4);
	setlinestyle (1, 1, 4);
	moveto(10,10); lineto(640,640);
	moveto(10,640); lineto(640,10);	
}
