#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
void workfile(int n);
char zadanie[9][10], otvet[9][10], proverka[9][10];
int main(){
	int vhod;
	cout<<"¬ведите сценарий"<<endl;
	cin>>vhod;//заменить на вызов меню
	if(vhod>3) workfile(vhod);
	system("PAUSE");
	return 0;
}
void workfile(int n){
	FILE *fz, *fo;
	int i=0, j=0, a, k=0;
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
		proverka[i][9]='\0';
		zadanie[i][9]='\0';
		otvet[i][9]='\0';
	}
	for(i=0;i<9;i++){
		for (j=0;j<9;j++)
		rehenie[i][j]='0';
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
					i++;
					j++;
				}
				else break;
			}
			i++;
			comb[j]='\0';
			strcpy (zadanie[k],comb);
			strcpy (proverka[k],comb);
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
			strcpy (otvet[k],comb); 
			k++;
		}	
	}
	fclose(fz);
	fclose(fo);
}
