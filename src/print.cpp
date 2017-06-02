#include "sudoky.h"
#include <graphics.h>
extern char task[9][10], decision[9][9], test[9][10];
void printz()
{
	int i, j;
	char ch[2];
	settextstyle(6,0,5);
	for (i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			setcolor(CYAN);
			if (task[i][j]>'0')
			{
				ch[0]=task[i][j];
				ch[1]='\0';
				outtextxy ( 30+i*70, 20+j*70, ch );
			}
		}
	}
}
void printr()
{
	int i, j;
	char ch[2];
	settextstyle(6,0,5);
	for (i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			setcolor(WHITE);
			if (decision[i][j]>'0')
			{
				ch[0]=decision[i][j];
				ch[1]='\0';
				outtextxy ( 30+i*70, 20+j*70, ch );
			}
		}
	}
}
