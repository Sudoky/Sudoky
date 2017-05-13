#include <stdlib.h> 
#include <iostream>
#include <stdio.h> 
#include <graphics.h>
#include <string.h>
using namespace std; 
void drowp();
int workfile(int n);
void printz();
void printr();
char task[9][10], reply[9][10], decision[9][9], test[9][10];
int main(){
	int vhod, t=0;
	cout<<"Enter the scenario"<<endl;
	cin>>vhod;//replace with menu
	if (vhod>3) t=workfile(vhod);
	else {
		//closegraph();
		system("PAUSE");
		return 0;
	}
	initwindow(1000,1000);
	cleardevice();
	drowp();
	printr();
	printz();
	delay(1000);
	closegraph();
	system("PAUSE");
	return 0;
}

void printz(){
	int i, j;
	char ch[2];
	settextstyle(6,0,7);
	for (i=0;i<9;i++){
		for(j=0;j<9;j++){
			setcolor(CYAN);
			if (task[i][j]>'0'){
				ch[0]=task[i][j];
				ch[1]='\0';
				outtextxy ( 75+i*100, 65+j*100, ch );
			}
		}
	}
}

void printr(){
	int i, j;
	char ch[2];
	settextstyle(6,0,7);
	for (i=0;i<9;i++){
		for(j=0;j<9;j++){
			setcolor(WHITE);
			if (decision[i][j]>'0'){
				ch[0]=decision[i][j];
				ch[1]='\0';
				outtextxy ( 75+i*100, 65+j*100, ch );
			}
		}
	}
}
int workfile(int n){
	FILE *fz, *fo;
	int i=0, j=0, t=0, a, k=0;
	char st[100], comb[10], ch;
	switch(n){
		case 111:{
			fz=fopen("111z.txt","r");
			fo=fopen("111o.txt","r");
			break;
		}
		case 112:{
			fz=fopen("112z.txt","r");
			fo=fopen("112o.txt","r");
			break;
		}
		case 113:{
			fz=fopen("113z.txt","r");
			fo=fopen("113o.txt","r");
			break;
		}
		case 121:{
			fz=fopen("121z.txt","r");
			fo=fopen("121o.txt","r");
			break;
		}
		case 122:{
			fz=fopen("122z.txt","r");
			fo=fopen("122o.txt","r");
			break;
		}
	}
	for(i=0;i<9;i++){
		test[i][9]='\0';
		task[i][9]='\0';
		reply[i][9]='\0';
	}
	for(i=0;i<9;i++){
		for (j=0;j<9;j++)
		decision[i][j]='0';
	}
	i=0;
	while(!feof(fz)){
		fgets(st,100,fz);
		a=strlen(st);
		while (i<a){
			j=0;
			while(st[i]!='\0'){
				if((st[i]!=' ')&&(st[i]!='\0')){
					comb[j]=st[i];
					if(st[i]=='0') t++;
					i++;
					j++;
				}
				else break;
			}
			i++;
			comb[j]='\0';
			strcpy (task[k],comb);
			strcpy (test[k],comb);
			k++;
		}	
	}
	i=0;
	k=0;
	while(!feof(fo)){
		fgets(st,100,fo);
		a=strlen(st);
		while (i<a){
			j=0;
			while(st[i]!='\0'){
				if((st[i]!=' ')&&(st[i]!='\0')){
					comb[j]=st[i];
					i++;
					j++;
				}
				else break;
			}
			i++;
			comb[j]='\0';
			strcpy (reply[k],comb); 
			k++;
		}	
	}
	fclose(fz);
	fclose(fo);
	return t;
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
