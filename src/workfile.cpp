#include "sudoky.h"
#include <graphics.h>
extern char task[9][10], decision[9][9], test[9][10];
int workfile(int n)
{
	FILE *fz;
	int i=0, j=0, t=0, a, k=0;
	char st[100], comb[10], ch;
	switch(n)
	{
		case 111:
		{
			fz=fopen("111z.txt","r");
			break;
		}
		case 112:
		{
			fz=fopen("112z.txt","r");
			break;
		}
		case 113:
		{
   			fz=fopen("113z.txt","r");
        	break;
		}
		case 121:
		{
			fz=fopen("121z.txt","r");
			break;
		}
		case 122:
		{
			fz=fopen("122z.txt","r");
			break;
		}
	}
    if (fz==NULL)
    {
        closegraph();
        cout<<"The file isn`t found or isn`t open"<<endl;
        system("PAUSE");
        return 1;
    }
	for(i=0;i<9;i++)
	{
		test[i][9]='\0';
		task[i][9]='\0';
	}
	for(i=0;i<9;i++)
	{
		for (j=0;j<9;j++)
		decision[i][j]='0';
	}
	i=0;
	while(!feof(fz))
	{
		fgets(st,100,fz);
		a=strlen(st);
		while (i<a)
		{
			j=0;
			while(st[i]!='\0')
			{
				if((st[i]!=' ')&&(st[i]!='\0'))
				{
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
	fclose(fz);
	return t;
}
