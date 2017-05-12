#include <stdlib.h> 
#include <stdio.h> 
//#include <graphics.h> 
#include <ctime>
#include <iostream>
#include <windows.h> 
using namespace std; 
int prov(int j, int i);
int proverka[9][9];
int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	int x,y,z;
	for (x=0;x<9;x++){
	for (y=0;y<9;y++){
	proverka[x][y]=rand () % 9;
	cout<<proverka[x][y]<<" ";
}
cout<<endl;
}
	z=prov( 0, 0);
	cout<<z;
	system("PAUSE"); 
	return 0; 
}

int prov(int j, int i){ 
	int k,s=0,m;
	for(k=0;k<9;k++){
	if ((proverka[j][k]==proverka[j][i])&&(i!=k)){
	s++;
	cout<<"строка "<<k<<endl;
	}
	if (s>0) break;
	}
	for(k=0;k<9;k++){
	if (s>0) break;
	if ((proverka[k][i]==proverka[j][i])&&(j!=k)) {
	s++;
	cout<<"стoлбец "<<k<<endl;}
	}
	if (s>0) return 4;
	else return 15;
}
	
