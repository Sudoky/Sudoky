int provdiag (int i, int j){
	int k,s=0,a;
	if ((i==j)&&(i!=4)&&(j!=4)) a=1;
	if (((8-i)==j)&&(i!=4)&&(j!=4)) a=2;
	if ((i==4)&&(j==4)) a=3;
	switch (a){
		case 1:{
			for(k=0;k<9;k++){
				if ((proverka[k][k]==proverka[i][j])&&(i!=k)&&(j!=k))s++;
				if (s>0) break;
			}
			break;
		}
		case 2:{
			for(k=0;k<9;k++){
				if ((proverka[8-k][k]==proverka[i][j])&&(i!=k)&&(j!=k))s++;
				if (s>0) break;
			}
			break;
		}
		case 3:{
			for(k=0;k<9;k++){
				if ((proverka[k][k]==proverka[i][j])&&(i!=k)&&(j!=k))s++;
				if (s>0) break;
				if ((proverka[8-k][k]==proverka[i][j])&&(i!=k)&&(j!=k))s++;
				if (s>0) break;
			}
			break;
		}
	}
	if (s>0) return 4;
	else return 15;
}
