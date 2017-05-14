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
void play();
int prov(int j, int i);
void global();
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
	play();
	getch();
	closegraph();
	system("PAUSE");
	return 0;
}

void play(){
	int x=0, y=0, t=0, i, j, p;
	char ch, s[2];
	s[1]='\0';
	while (1){
	cleardevice();
	drowp();
	printr();
	printz();
	setcolor(GREEN);
	setlinestyle (1, 1, 4);
	rectangle (55+x*100, 55+y*100, 145+x*100, 145+y*100);
	while (1){
		if(kbhit()) ch=getch();
		if (ch==77) x++;
		if (ch==80) y++;
		if (ch==75) x--;
		if (ch==72) y--;
		if ((ch>=48)&&(ch<=57)) {
			decision[x][y]=ch;
			if (task[x][y]=='0') {
				test[x][y]=ch;
				if (ch>48) p=prov(x,y);
				setcolor(p);
				if ((p==4)&&(ch!='0')){ 
				s[0]=ch;
				outtextxy ( 75+x*100, 65+y*100,s);
				ch=0;
				p=0;
				}
			}
		}
		if (y<0) y=8;
		if (x<0) x=8;
		if (y>8) y=0;
		if (x>8) x=0;
		if(ch>0) break;
	}
	t=0;
		for(i=0;i<9;i++){
		for (j=0;j<9;j++)
		if (test[i][j]=='0') t++;
	}
	if (t==0){
		cleardevice();
	global();
		break;
	}
	if (ch==27) break;
	ch=0;
	}
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
	setcolor(WHITE);
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
int prov(int j, int i){ 
	int k,s=0,m;
	for(k=0;k<9;k++){
	if ((test[j][k]==test[j][i])&&(i!=k)){
	s++;
	cout<<"строка "<<k<<endl;
	}
	if (s>0) break;
	}
	for(k=0;k<9;k++){
	if (s>0) break;
	if ((test[k][i]==test[j][i])&&(j!=k)) {
	s++;
	cout<<"стoлбец "<<k<<endl;}
	}
	if (s>0) return 4;
	else {switch(j){ 
		case 0:case 1:case 2: {
		switch (i){
			case 0:case 1:case 2:{ 
				for (m=0;m<3;m++)
				for (k=0;k<3;k++){
					if ((test[m][k]==test[j][i])&&(j!=m)&&(i!=k)) s++;	
				}	
				break;
			}
			case 3:case 4:case 5:{ 
				for (m=0;m<3;m++)
				for (k=3;k<6;k++){
					if ((test[m][k]==test[j][i])&&(j!=m)&&(i!=k)) s++;	
				}	
				break;
			}
			case 6:case 7:case 8:{ 
				for (m=0;m<3;m++)
				for (k=6;k<9;k++){
					if ((test[m][k]==test[j][i])&&(j!=m)&&(i!=k)) s++;	
				}	
				break;
			}
		} break;

		}
		case 3:case 4:case 5: {
		switch (i){
			case 0:case 1:case 2:{ 
				for (m=3;m<6;m++)
				for (k=0;k<3;k++){
					if ((test[m][k]==test[j][i])&&(j!=m)&&(i!=k)) s++;	
				}	
				break;
			}
			case 3:case 4:case 5:{ 
				for (m=3;m<6;m++)
				for (k=3;k<6;k++){
					if ((test[m][k]==test[j][i])&&(j!=m)&&(i!=k)) s++;	
				}	
				break;
			}
			case 6:case 7:case 8:{ 
				for (m=3;m<6;m++)
				for (k=6;k<9;k++){
					if ((test[m][k]==test[j][i])&&(j!=m)&&(i!=k)) s++;	
				}	
				break;
			}
		} break;
	
		}
		case 6:case 7:case 8: {
		switch (i){
			case 0:case 1:case 2:{ 
				for (m=6;m<9;m++)
				for (k=0;k<3;k++){
					if ((test[m][k]==test[j][i])&&(j!=m)&&(i!=k)) 
					s++;
				}	
				break;
			}
			case 3:case 4:case 5:{ 
				for (m=6;m<9;m++)
				for (k=3;k<6;k++){
					if ((test[m][k]==test[j][i])&&(j!=m)&&(i!=k))  
					s++;	
				}	
				break;
			}
			case 6:case 7:case 8:{ 
				for (m=6;m<9;m++)
				for (k=6;k<9;k++){
					if ((test[m][k]==test[j][i])&&(j!=m)&&(i!=k))
					s++;	
				}
				break;
			}
		} break;
		}
		break;
	
	}
	}
	if (s>0) return 4;
	else return 15;	
}

void global(){ int z,x,y;
	for (x=0;x<9;x++){
	if (z==4) {
	outtextxy ( 200, 400,"You loser!!!=)"); break;
	}
	for (y=0;y<9;y++){
	z=prov(x,y);
	if (z==4) break;
	if ((z!=4)&&(x==8)&&(y==8)) outtextxy ( 250, 400,"You Win!!!");
	}
	}
}
