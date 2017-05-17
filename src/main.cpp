#include "sudoky.h"
char task[9][10], reply[9][10], decision[9][9], test[9][10];
int vhod;
int main(){
	int t=0;
	vhod=Menu();
	if (vhod>3) t=workfile(vhod);
	else {
		closegraph();
		system("PAUSE");
		return 0;
	}
	play();
	getch();
	closegraph();
	system("PAUSE");
	return 0;
}
