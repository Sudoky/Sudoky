#include <stdlib.h> 
#include <stdio.h> 
#include <graphics.h> 
#include <ctime>
#include <iostream>
#include <windows.h> 
using namespace std; 
int prov(int j, int i);
void global();
int proverka[9][9];
int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	initwindow(1000,1000);
	srand(time(0));
	int x,y,z;
	for (x=0;x<9;x++){
	for (y=0;y<9;y++){
	proverka[x][y]=rand () % 9;
	cout<<proverka[x][y]<<" ";
}
cout<<endl;
}

	global();
	delay(1000);
	getch();
	cout<<z;
	system("PAUSE"); 
	return 0; 
}


int prov(int j, int i){ 
	int k,s=0,m;
	for(k=0;k<9;k++){
	if ((proverka[j][k]==proverka[j][i])&&(i!=k)){
	s++;
	cout<<"������ "<<k<<endl;
	}
	if (s>0) break;
	}
	for(k=0;k<9;k++){
	if (s>0) break;
	if ((proverka[k][i]==proverka[j][i])&&(j!=k)) {
	s++;
	cout<<"��o���� "<<k<<endl;}
	}
	if (s>0) return 4;
	else {switch(j){ 
		case 0:case 1:case 2: {
		switch (i){
			case 0:case 1:case 2:{ 
				for (m=0;m<3;m++)
				for (k=0;k<3;k++){
					if ((proverka[m][k]==proverka[j][i])&&(j!=m)&&(i!=k)) s++;	
				}	
				break;
			}
			case 3:case 4:case 5:{ 
				for (m=0;m<3;m++)
				for (k=3;k<6;k++){
					if ((proverka[m][k]==proverka[j][i])&&(j!=m)&&(i!=k)) s++;	
				}	
				break;
			}
			case 6:case 7:case 8:{ 
				for (m=0;m<3;m++)
				for (k=6;k<9;k++){
					if ((proverka[m][k]==proverka[j][i])&&(j!=m)&&(i!=k)) s++;	
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
					if ((proverka[m][k]==proverka[j][i])&&(j!=m)&&(i!=k)) s++;	
				}	
				break;
			}
			case 3:case 4:case 5:{ 
				for (m=3;m<6;m++)
				for (k=3;k<6;k++){
					if ((proverka[m][k]==proverka[j][i])&&(j!=m)&&(i!=k)) s++;	
				}	
				break;
			}
			case 6:case 7:case 8:{ 
				for (m=3;m<6;m++)
				for (k=6;k<9;k++){
					if ((proverka[m][k]==proverka[j][i])&&(j!=m)&&(i!=k)) s++;	
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
					if ((proverka[m][k]==proverka[j][i])&&(j!=m)&&(i!=k)) {
					s++;
					cout<<"������� "<<m<<endl<<"������ "<<k<<endl;}	
				}	
				break;
			}
			case 3:case 4:case 5:{ 
				for (m=6;m<9;m++)
				for (k=3;k<6;k++){
					if ((proverka[m][k]==proverka[j][i])&&(j!=m)&&(i!=k))  {
					s++;
					cout<<"������� "<<m<<endl<<"������ "<<k<<endl;}		
				}	
				break;
			}
			case 6:case 7:case 8:{ 
				for (m=6;m<9;m++)
				for (k=6;k<9;k++){
					if ((proverka[m][k]==proverka[j][i])&&(j!=m)&&(i!=k)){
					s++;
					cout<<"������� "<<m<<endl<<"������ "<<k<<endl;}	
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

