#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
	int gd=DETECT,gm,i;
	
	//To enter into graphics mode
	initgraph(&gd,&gm,"");
	
	//To move the car forward
	for(i=0;i<=500;i++)
	{
		//To set the text style
		settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
		
		//It displays the text on the output
		outtextxy(50,100,"Run Baby Run...");
		
		//To set color
		setcolor(WHITE);
		
		//To draw a line in given co-ordinates
		line(20,320,650,320);
		setcolor(RED);
		
		//To draw the rectangle
		rectangle(50+i,200,200+i,280);
		
		//To set format of the filled color
		setfillstyle(HATCH_FILL,RED);
		
		//To specify where to color by giving the point co-ordinates within the area to be colored
		floodfill(100+i,250,RED);
		setcolor(YELLOW);
		rectangle(160+i,180,200+i,200);
		setfillstyle(SLASH_FILL,YELLOW);
		floodfill(170+i,190,YELLOW);
		

		setcolor(BLUE);
		
		//To draw circle as front wheel of car
		circle(70+i,300,20);
		circle(70+i,300,14);
		setfillstyle(SOLID_FILL,LIGHTMAGENTA);
		floodfill(51+i,300,BLUE);
		setfillstyle(HATCH_FILL,LIGHTGRAY);
		floodfill(70+i,300,BLUE);
		
		
		setcolor(BLUE);
		
		//To draw circle as rear wheel of car
		circle(180+i,300,20);
		circle(180+i,300,14);
		setfillstyle(SOLID_FILL,LIGHTMAGENTA);
		floodfill(161+i,300,BLUE);
		setfillstyle(HATCH_FILL,LIGHTGRAY);
		floodfill(180+i,300,BLUE);
		
		//To move the car after certain time interval
		delay(10);
		cleardevice();
	}
	getch();
	
	//To switch from graphics mode to text mode
	closegraph();
}
