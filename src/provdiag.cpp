#include "sudoky.h"
extern char task[9][10], decision[9][9], test[9][10];
int provdiag (int i, int j,char test[9][10]){
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
