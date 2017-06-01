#include "sudoky.h"
#include <graphics.h>
char task[9][10], decision[9][9], test[9][10];
int vhod;
void check();
int main()
{
	int t=0;
	vhod=Menu();
	 
	if ((vhod>3)&&(vhod!=21)&&(vhod!=22)) t=workfile(vhod);
	if (vhod<=3) 
	{
		closegraph();
		system("PAUSE");
		return 0;
	}
	if ((vhod==21)||(vhod==22)) check();
	else play();
	getch();
	closegraph();
	system("PAUSE");
	return 0;
}
