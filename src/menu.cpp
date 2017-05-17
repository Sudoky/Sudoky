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
