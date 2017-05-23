#include "sudoky.h"
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
        	for (i=1; i<=4; i++)
		  	{
            	settextstyle(GOTHIC_FONT, HORIZ_DIR, 5);
            	switch(i)
            	{
					case 1: outtextxy (100,50+i*100," Play"); break;
                	case 2: outtextxy (100,50+i*100," Check"); break;
                	case 3: outtextxy (100,50+i*100," Exit"); break;
                	case 4: outtextxy (100,50+i*100," Help"); break;
                	default: break;
                }
        	}
            setcolor(4);
            switch(n)
        	{
				case 1: outtextxy (100,50+n*100," Play"); break;
               	case 2: outtextxy (100,50+n*100," Check"); break;
               	case 3: outtextxy (100,50+n*100," Exit"); break;
               	case 4: outtextxy (100,50+n*100," Help"); break;
              	default: break;
			}
        	ch=getch();
        	if (ch==72) n--;
        	if (n<=0) n=4;
        	if (ch==80) n++;
        	if (n>4) n=1 ;
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
				cleardevice();
               	default: break;
			}
			break;
			case 4:
        	{	
        		do
				{
					setcolor(1);
        			settextstyle(GOTHIC_FONT, HORIZ_DIR, 1);
					outtextxy (10,10,"Rules of the game: ");
					outtextxy (10,40,"to fill all empty cages so ");
					outtextxy (10,70,"that figures didn't repeat ");
					outtextxy (10,100,"in every line and a column,");
					outtextxy (10,130,"and also squares 3 on 3.");
					outtextxy (10,160,"If you play the diag mode,");
					outtextxy (10,190,"then you should receive ");
					outtextxy (10,220,"also not repeating on noted diagonals");
					outtextxy (10,250,"(visible when input diag mode).");
					outtextxy (10,280,"For check from file of your of a variant sudoky,");
					outtextxy (10,310, "you enter in the 22.txt file");
					outtextxy (10,340,"and you insert columns through gaps.");
					outtextxy (10,370,"Example of filling of 3 columns");
					outtextxy (10,400,"123456789 234567891 345678912.");
       				setcolor(4);
       				for (i=1; i<=1; i++)
					{
						settextstyle(GOTHIC_FONT, HORIZ_DIR, 6);
           				switch(i)
   						{
							case 1: outtextxy (300,500," Back"); break;
   							default: break;
           				}
            		}
           			setcolor(4);
       				switch(n)
            		{
						case 1: outtextxy (300,500," Back"); break;
           				default: break;
					}    
          			ch=getch();
   					if (ch==72) n--;
          			if (n<=0) n=1;
       				if (ch==80) n++;
   					if (n>1) n=1;
          		}	
				while (ch!=13);
          		cleardevice();
          		switch(n) 
       			{
					break;
	  			}
					n=1;
		  			break;
			}
		}
	}
    system("PAUSE");
    return 0;
}

