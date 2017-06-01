#include "sudoky.h"
extern char task[9][10], reply[9][10], decision[9][9], test[9][10];
extern int vhod;
int prov(int j, int i, char test[9][10])
{ 
	int k,s=0,m;
	for(k=0;k<9;k++)
	{
		if ((test[j][k]==test[j][i])&&(i!=k))
		s++;
		if (s>0) break;
	}
	for(k=0;k<9;k++)
	{
		if (s>0) break;
		if ((test[k][i]==test[j][i])&&(j!=k)) s++;
	}
	if (s>0) return 4;
	else 
	{
		switch(j)
		{ 
			case 0:case 1:case 2: 
			{
				switch (i)
				{
					case 0:case 1:case 2:
					{ 
						for (m=0;m<3;m++)
						for (k=0;k<3;k++)
						{
							if ((test[m][k]==test[j][i])&&(j!=m)&&(i!=k)) s++;	
						}	
						break;
					}
					case 3:case 4:case 5:
					{ 
						for (m=0;m<3;m++)
						for (k=3;k<6;k++)
						{
							if ((test[m][k]==test[j][i])&&(j!=m)&&(i!=k)) s++;	
						}	
						break;
					}
					case 6:case 7:case 8:
					{ 
						for (m=0;m<3;m++)
						for (k=6;k<9;k++)
						{
							if ((test[m][k]==test[j][i])&&(j!=m)&&(i!=k)) s++;	
						}	
						break;
					}
				} 
				break;
			}
			case 3:case 4:case 5: 
			{
				switch (i)
				{
					case 0:case 1:case 2:
					{ 
						for (m=3;m<6;m++)
						for (k=0;k<3;k++)
						{
							if ((test[m][k]==test[j][i])&&(j!=m)&&(i!=k)) s++;	
						}	
						break;
					}
					case 3:case 4:case 5:
					{ 
						for (m=3;m<6;m++)
						for (k=3;k<6;k++)
						{
							if ((test[m][k]==test[j][i])&&(j!=m)&&(i!=k)) s++;	
						}	
						break;
					}
					case 6:case 7:case 8:
					{ 
						for (m=3;m<6;m++)
						for (k=6;k<9;k++)
						{
							if ((test[m][k]==test[j][i])&&(j!=m)&&(i!=k)) s++;	
						}	
						break;
					}
				}
				break;
			}
			case 6:case 7:case 8: 
			{
				switch (i)
				{
					case 0:case 1:case 2:
					{ 
						for (m=6;m<9;m++)
						for (k=0;k<3;k++)
						{
							if ((test[m][k]==test[j][i])&&(j!=m)&&(i!=k)) 
							s++;
						}	
						break;
					}
					case 3:case 4:case 5:
					{ 
						for (m=6;m<9;m++)
						for (k=3;k<6;k++)
						{
							if ((test[m][k]==test[j][i])&&(j!=m)&&(i!=k))  
							s++;	
						}	
						break;
					}
					case 6:case 7:case 8:
					{ 
						for (m=6;m<9;m++)
						for (k=6;k<9;k++)
						{
							if ((test[m][k]==test[j][i])&&(j!=m)&&(i!=k))
							s++;	
						break;
						}
					}
					break;
				}
				break;
			}
		}
		if (s>0) return 4;
		else return 15;	
	}
}
