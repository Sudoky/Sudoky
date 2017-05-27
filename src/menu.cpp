#include "sudoky.h"
int Menu()
{
	int n=1, i;
    char ch;
    initwindow(720,660);
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
          			if (n>3) n=1;
          		} 
				while (ch!=13);
          		cleardevice();
       			switch(n) 
          		{
		  			case 1: return 121;
          			case 2: return 122;
				} 
				n=1;
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
							case 1: outtextxy (100,50+i*100," Check Display"); break;
           					case 2: outtextxy (100,50+i*100," Check From File"); break;
                			case 3: outtextxy (100,50+i*100," Back"); break;
                			default: break;
               			}
       				}
              		setcolor(4);
       				switch(n)
       				{
						case 1: outtextxy (100,50+n*100," Check Display"); break;
                		case 2: outtextxy (100,50+n*100," Check From File"); break;
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
			case 4: do 
				{ 
          			setcolor(2);
          			for (i=1; i<=4; i++)
					{
           				switch(i)
           				{
						case 1: outtextxy (50,50+i*100,"Game Rules"); break;
               			case 2: outtextxy (50,50+i*100,"Control"); break;
               			case 3: outtextxy (50,50+i*100,"Rule the use of Check"); break;
               			case 4: outtextxy (50,50+i*100,"Back "); break;
               			default: break;
            			}
           			}
            	 	setcolor(4);
              		switch(n)
           			{
						case 1: outtextxy (50,50+n*100,"Game Rules"); break;
               			case 2: outtextxy (50,50+n*100,"Control"); break;
                		case 3: outtextxy (50,50+n*100,"Rule the use of Check"); break;
               			case 4: outtextxy (50,50+n*100,"Back "); break;
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
	  			case 1: do
				{
					setcolor(1);
        			settextstyle(GOTHIC_FONT, HORIZ_DIR, 1);
					outtextxy (10,10,"Ваша задача заполнить всё поле так, ");
					outtextxy (10,40,"чтобы во всех строках, колонках и");
					outtextxy (10,70,"площадках 3 на 3 не было ");
					outtextxy (10,100,"повторяющихся элементов.");
					outtextxy (10,130,"В диагональном режиме ");
					outtextxy (10,160,"правила все те же только,");
					outtextxy (10,190,"вам также надо получить ");
					outtextxy (10,220,"неповторяющиеся элементы");
					outtextxy (10,250,"на отмеченных диагоналях.");
       				setcolor(4);
       				for (i=1; i<=1; i++)
					{
						settextstyle(GOTHIC_FONT, HORIZ_DIR, 5);
           				switch(i)
   						{
							case 1: outtextxy (300,500,"Back in Menu"); break;
   							default: break;
           				}
            		}
           			setcolor(4);
       				switch(n)
            		{
						case 1: outtextxy (300,500,"Back in Menu"); break;
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
          		break;
	       		case 2: do
				{
					setcolor(1);
        			settextstyle(GOTHIC_FONT, HORIZ_DIR, 1);
					outtextxy (10,10,"Перемещения курсора вверх: стрелка вверх ");
					outtextxy (10,40,"Перемещения курсора вниз: стрелка вниз ");
					outtextxy (10,70,"Перемещения курсора влево: стрелка влево  ");
					outtextxy (10,100,"Перемещения курсора вправо: стрелка вправо ");
					outtextxy (10,130,"Для проставления цифр: цифры от 1-9(любые)");
					outtextxy (10,160,"Для удаления элемента: цифра 0.");
       				setcolor(4);
       				for (i=1; i<=1; i++)
					{
						settextstyle(GOTHIC_FONT, HORIZ_DIR, 5);
           				switch(i)
   						{
							case 1: outtextxy (300,500,"Back in Menu"); break;
   							default: break;
           				}
            		}
           			setcolor(4);
       				switch(n)
            		{
						case 1: outtextxy (300,500,"Back in Menu"); break;
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
          		break;
       			case 3: do
				{
					setcolor(1);
        			settextstyle(GOTHIC_FONT, HORIZ_DIR, 1);
					outtextxy (10,10,"Для проверки через экран:");
					outtextxy (10,40,"просто вводите цифры как и  ");
					outtextxy (10,70,"классическом режиме игры.  ");
					outtextxy (10,100,"Для проверки через файл, ");
					outtextxy (10,130,"введите в файл 22.txt ");
					outtextxy (10,160,"цифры столбиком.");
					outtextxy (10,190,"Например при вводе  ");
					outtextxy (10,220,"123456789 456789123 789123456 ");
					outtextxy (10,250,"234567891 567891234 891234567 ");
					outtextxy (10,280,"345678912 678912345 912345678");
					outtextxy (10,310, "вам высветится,что вы победили.");
					outtextxy (10,340,"(Ввод в файл произвести заранее)");
       				setcolor(4);
       				for (i=1; i<=1; i++)
					{
						settextstyle(GOTHIC_FONT, HORIZ_DIR, 5);
           				switch(i)
   						{
							case 1: outtextxy (300,500,"Back in Menu"); break;
   							default: break;
           				}
            		}
           			setcolor(4);
       				switch(n)
            		{
						case 1: outtextxy (300,500,"Back in Menu"); break;
           				default: break;
					}    
          			ch=getch();
   					if (ch==72) n--;
          			if (n<=0) n=1;
       				if (ch==80) n++;
   					if (n>1) n=1;
          		}	
				while (ch!=13);
          		cleardevice();;
	 			break;
		  	} 
			n=1;
		  	break;
		}
	}
    system("PAUSE");
    return 0;
}
