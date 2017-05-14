#include <stdlib.h> 
#include <iostream>
#include <stdio.h> 
#include <graphics.h>
#include <string.h>
using namespace std; 
void drowp();
void drowdiag();
int workfile(int n);
void printz();
int Menu();
void printr();
void play();
int prov(int j, int i);
int provdiag (int i, int j);
void global();
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
int Menu()
{
	int n=1, i;
    char ch;
    initwindow(660,660);
    while (1)
	{ 
    	do 
		{ 
        	setcolor(2);
        	for (i=1; i<=3; i++)
		  	{
            	settextstyle(GOTHIC_FONT, HORIZ_DIR, 6);
            	switch(i)
            	{
					case 1: outtextxy (100,50+i*100," Play"); break;
                	case 2: outtextxy (100,50+i*100," Check"); break;
                	case 3: outtextxy (100,50+i*100," Exit"); break;
                	default: break;
                }
        	}
            setcolor(4);
            switch(n)
        	{
				case 1: outtextxy (100,50+n*100," Play"); break;
               	case 2: outtextxy (100,50+n*100," Check"); break;
               	case 3: outtextxy (100,50+n*100," Exit"); break;
              	default: break;
			}
        	ch=getch();
        	if (ch==72) n--;
        	if (n<=0) n=3;
        	if (ch==80) n++;
        	if (n>3) n=1 ;
        } 
		while (ch!=13);
        cleardevice();
        switch(n)
        {
			case 1: do 
			{ 
        		setcolor(2);
        		for (i=1; i<=3; i++)
				{
            		switch(i)
           			{
						case 1: outtextxy (100,50+i*100," Simple Mode"); break;
               			case 2: outtextxy (100,50+i*100," Diag Mode"); break;
               			case 3: outtextxy (100,50+i*100," Back"); break;
               			default: break;
           			}
            	}
            	setcolor(4);
            	switch(n)
            	{
					case 1: outtextxy (100,50+n*100," Simple Mode"); break;
               		case 2: outtextxy (100,50+n*100," Diag Mode"); break;
               		case 3: outtextxy (100,50+n*100," Back"); break;
               		default: break;
				}    
          		ch=getch();
          		if (ch==72) n--;
          		if (n<=0) n=3;
       			if (ch==80) n++;
       			if (n>3) n=1;
          	}
			while (ch!=13);
          	cleardevice();
			switch(n)
		   	{
				case 1: do 
				{ 
          			setcolor(2);
          			for (i=1; i<=4; i++)
					{
           				switch(i)
           				{
							case 1: outtextxy (100,50+i*100," Easy"); break;
               				case 2: outtextxy (100,50+i*100," Medium"); break;
                			case 3: outtextxy (100,50+i*100," Hard"); break;
                			case 4: outtextxy (100,50+i*100," Back in Menu"); break;
                			default: break;
            			}
           			}
            	 	setcolor(4);
              		switch(n)
           			{
						case 1: outtextxy (100,50+n*100," Easy"); break;
               			case 2: outtextxy (100,50+n*100," Medium"); break;
               			case 3: outtextxy (100,50+n*100," Hard"); break;
               			case 4: outtextxy (100,50+n*100," Back in Menu"); break;
               			default: break;
					}
          			ch=getch();
          			if (ch==72) n--;
          			if (n<=0) n=4;
       				if (ch==80) n++;
       				if (n>4) n=1;
       			}
				while (ch!=13);
          		cleardevice();
          		switch(n) 
       			{
	  				case 1: return 111;
	       			case 2: return 112;
       				case 3: return 113;
	 				break;
		  		} 
				n=1;
		  		break;
               	case 2: do 
				{ 
          			setcolor(2);
         			for (i=1; i<=3; i++)
					{
           				switch(i)
              			{
							case 1: outtextxy (100,50+i*100," Hard"); break;
               				case 2: outtextxy (100,50+i*100," Very Hard"); break;
               				case 3: outtextxy (100,50+i*100," Back in Menu"); break;
               				default: break;
           				}
            		}
            		setcolor(4);
              		switch(n)
           			{
						case 1: outtextxy (100,50+n*100," Hard"); break;
                		case 2: outtextxy (100,50+n*100," Very Hard"); break;
                		case 3: outtextxy (100,50+n*100," Back in Menu"); break;
               			default: break;
					} 
					ch=getch();
       				if (ch==72) n--;
          			if (n<=0) n=3;
          			if (ch==80) n++;
          			if (n>3)n=1 ;
          		} 
				while (ch!=13);
          		cleardevice();
       			switch(n) 
          		{
		  			case 1: return 121;
          			case 2: return 122;
				} 
	  			break;
               	
				while (ch!=13);
          		cleardevice();
               	default: break;
			}
   			break;
        	case 2:
			{
				do 
				{ 
   					setcolor(2);
          			for (i=1; i<=3; i++)
					{ 
              			switch(i)
              			{
							case 1: outtextxy (100,50+i*100," Check Simple"); break;
           					case 2: outtextxy (100,50+i*100," Check Diag"); break;
                			case 3: outtextxy (100,50+i*100," Back"); break;
                			default: break;
               			}
       				}
              		setcolor(4);
       				switch(n)
       				{
						case 1: outtextxy (100,50+n*100," Check Simple"); break;
                		case 2: outtextxy (100,50+n*100," Check Diag"); break;
           				case 3: outtextxy (100,50+n*100," Back"); break;
           				default: break;
					}
          			ch=getch();
       				if (ch==72) n--;
          			if (n<=0) n=3;
          			if (ch==80) n++;
       				if (n>3) n=1 ;
       		 	}
				while (ch!=13);
          		cleardevice();
          		switch(n) 
       			{
	  				case 1: return 21;
	       			case 2: return 22;
	 				break;
		  		}
				n=1;
		  		break;
			}
			break;
           	case 3:
			{ 
			return 3;
			}
			break;
            default: break;  
		}
	}
    system("PAUSE");
    return 0;
}
void play(){
	int x=0, y=0, t=0, i, j, p;
	char ch, s[2];
	s[1]='\0';
	while (1){
	cleardevice();
	if((vhod==121)||(vhod==122)) drowdiag();
	drowp();
	printr();
	printz();
	setcolor(GREEN);
	setlinestyle (1, 1, 4);
	rectangle (15+x*70, 15+y*70, 75+x*70, 75+y*70);
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
				if ((ch>48)&&(p!=4)&&((vhod==121)||(vhod==122))) p=provdiag(x,y);
				setcolor(p);
				if ((p==4)&&(ch!='0')){ 
				s[0]=ch;
				settextstyle(6,0,5);
				outtextxy ( 30+x*70, 20+y*70,s);
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
	settextstyle(6,0,5);
	for (i=0;i<9;i++){
		for(j=0;j<9;j++){
			setcolor(CYAN);
			if (task[i][j]>'0'){
				ch[0]=task[i][j];
				ch[1]='\0';
				outtextxy ( 30+i*70, 20+j*70, ch );
			}
		}
	}
}

void printr(){
	int i, j;
	char ch[2];
	settextstyle(6,0,5);
	for (i=0;i<9;i++){
		for(j=0;j<9;j++){
			setcolor(WHITE);
			if (decision[i][j]>'0'){
				ch[0]=decision[i][j];
				ch[1]='\0';
				outtextxy ( 30+i*70, 20+j*70, ch );
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
	int i, x=10, y=10; 
	setcolor(WHITE);
	setlinestyle (1, 1, 4);
	for(i=10;i<=640;i=i+210){
		moveto(x,i); lineto(640,i);
		moveto(i,x); lineto(i,640);
	}
	for(i=10;i<=640;i=i+210){
		moveto(x,i); lineto(640,i);
		moveto(i,x); lineto(i,640);
	}
	setlinestyle (1, 1, 1);
	for(i=80;i<=570;i=i+70){
		if((i!=220)&&(i!=430)){
			moveto(x,i); lineto(640,i);
			moveto(i,x); lineto(i,640);
		}
	}	
}
void drowdiag(){
	int i, x=50, y=50; 
	setcolor(4);
	setlinestyle (1, 1, 4);
	moveto(10,10); lineto(640,640);
	moveto(10,640); lineto(640,10);	
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
int provdiag (int i, int j){
	int k,s=0,a=0;
	if ((i==j)&&(i!=4)&&(j!=4)) a=1;
	if (((8-i)==j)&&(i!=4)&&(j!=4)) a=2;
	if ((i==4)&&(j==4)) a=3;
	switch (a){
		case 1:{
			for(k=0;k<9;k++){
				if ((test[k][k]==test[i][j])&&(i!=k)&&(j!=k))s++;
				if (s>0) break;
			}
			break;
		}
		case 2:{
			for(k=0;k<9;k++){
				if ((test[8-k][k]==test[i][j])&&(i!=k)&&(j!=k))s++;
				if (s>0) break;
			}
			break;
		}
		case 3:{
			for(k=0;k<9;k++){
				if ((test[k][k]==test[i][j])&&(i!=k)&&(j!=k))s++;
				if (s>0) break;
				if ((test[8-k][k]==test[i][j])&&(i!=k)&&(j!=k))s++;
				if (s>0) break;
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
	outtextxy ( 150, 300,"You loser!!!=)"); break;
	}
	for (y=0;y<9;y++){
	z=prov(x,y);
	if (z==4) break;
	if ((z!=4)&&(x==8)&&(y==8)) outtextxy ( 175, 300,"You Win!!!");
	}
	}
}
