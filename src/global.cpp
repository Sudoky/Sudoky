#include "sudoky.h"
extern int vhod;
void global(char test[9][10])
{ 
	int z,x,y;
	for (x=0;x<9;x++)
	{
		if ((z==4)&&((vhod==21)||(vhod==22))) 
		{
			outtextxy ( 120, 250,"WRONDLY"); break;
		}
		for (y=0;y<9;y++)
		{
			z=prov(x,y,test);
			if (z==4) break;
			if ((z!=4)&&(x==8)&&(y==8)) outtextxy ( 230, 250,"WIN");
		}
	}
}
