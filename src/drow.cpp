#include <stdlib.h> 
#include <stdio.h> 
#include <graphics.h> 
using namespace std; 
void drowp();
int main(){
	initwindow(900,900); 
	drowp();
	getch();
	closegraph();
	system("PAUSE"); 
	return 0; 
}

void drowp(){
	int i, x=50, y=50; 
	setlinestyle (1, 1, 4);
	for(i=50;i<=950;i=i+300){
		moveto(x,i); lineto(950,i);
		moveto(i,x); lineto(i,950);
	}
	for(i=50;i<=950;i=i+300){
		moveto(x,i); lineto(950,i);
		moveto(i,x); lineto(i,950);
	}
	setlinestyle (1, 1, 1);
	for(i=150;i<=850;i=i+100){
		if((i!=350)&&(i!=650)){
			moveto(x,i); lineto(950,i);
			moveto(i,x); lineto(i,950);
		}
	}	
}
