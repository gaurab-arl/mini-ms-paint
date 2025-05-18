#include "userui.h"

void background_images()
{
readimagefile("deep_space_background.bmp", 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);
}

void click_check()
{
	int x , y;
	char coord[20];
	while(!kbhit())
	{
		if(ismouseclick(WM_LBUTTONDOWN))
		{
		getmouseclick(WM_LBUTTONDOWN , x , y);
		clearmouseclick(WM_LBUTTONDOWN);
		
	snprintf(coord , sizeof(coord) , "%d %d" , x , y);
		outtextxy(x , y , coord);
	}
			if(ismouseclick(WM_RBUTTONDOWN))
		{
		getmouseclick(WM_RBUTTONDOWN , x , y);
		clearmouseclick(WM_RBUTTONDOWN);
        options( x , y);
		
	}
}
}

void options(int x , int y )
{
	int xinc = 2 , yinc = 2;
	setfillstyle(SOLID_FILL , BLACK);
	bar(x - xinc , y + yinc , x + 100 + xinc , y +150 + yinc);
	setcolor(WHITE);
		rectangle(x , y , x + 100 , y + 150);
		setcolor(RED);
		outtextxy( x + 5 , y + 5 ,(char*) " Circle");
		outtextxy( x + 5 , y + 40 , (char*)" line");
		outtextxy( x + 5 , y + 80,(char*) " rectangle");
}


