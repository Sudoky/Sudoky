#include "sudoky.h"
extern char task[9][10], reply[9][10], decision[9][9], test[9][10];
extern int vhod;

void check(){
	switch (vhod){ 
		case 21: { 
			int x=0, y=0, t=0, i, j, p;
			char ch, s[2];
			s[1]='\0';
			for (i=0; i<9; i++){
            	for (j=0; j<9; j++){
            		test[i][j]='0';
            		task[i][j]='0';
            		decision[i][j]='0';
            	}
        	}
			while (1){
			cleardevice();
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
			
			break;
		}
		case 22: { 
			FILE *f;
			int i, j=0, t=0, a, k=0;
			char st[100], comb[10], ch;
			f=fopen("22.txt","r");
			for(i=0;i<9;i++){
				test[i][9]='\0';
	    	}
				i=0;
			while(!feof(f)){  
				fgets(st,100,f);
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
					strcpy (test[k],comb);
					k++;
				}
			}
			fclose(f);
			global();
			break;
		}
	}	
}
