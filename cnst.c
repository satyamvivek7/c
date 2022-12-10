// C program to implement
// the above approach
#include <conio.h>
#include <graphics.h>
#include <stdio.h>

// Driver code
int main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\turboc3\\bgi");
	setfillstyle(SOLID_FILL, CYAN);

	// Head Outer Circle
	circle(500, 200, 100);

	// Head Inner Circle
	circle(500, 212, 88);
	floodfill(502, 102, 15);
	setfillstyle(SOLID_FILL, CYAN);

	// Body Outer Circle
	circle(500, 400, 100);

	// Body Inner Circle
	circle(500, 388, 88);
	floodfill(502, 498, 15);
	setfillstyle(SOLID_FILL, RED);

	// NOSE
	circle(502, 214, 10);
	floodfill(504, 216, 15);

	// Left Eye
	circle(460, 170, 15);

	// Right Eye
	circle(540, 170, 15);

	// Left Mustache Middle
	// Line
	line(430, 214, 380, 214);

	// Left Mustache Upper
	// Line
	line(430, 214, 380, 196);

	// Left Mustache Lower
	// Line
	line(430, 214, 380, 234);

	// Right Mustache Middle
	// Line
	line(570, 214, 620, 214);

	// Right Mustache Upper
	// Line
	line(570, 214, 620, 196);

	// Right Mustache Lower
	// Line
	line(570, 214, 620, 234);

	// Nose-Mouth Connector
	line(502, 224, 502, 240);

	// Mouth Horizontal Line
	line(465, 240, 535, 240);

	// Mouth Tangent Line
	line(465, 240, 502, 260);

	// Mouth Tangent Line
	line(502, 260, 535, 240);

	setfillstyle(SOLID_FILL, CYAN);

	// Right Up Hand
	line(500, 300, 650, 320);

	// Right Low Hand
	line(500, 300, 650, 340);

	// Right Hand Joining
	line(650, 320, 650, 340);
	floodfill(645, 332, 15);
	setfillstyle(SOLID_FILL, CYAN);

	// Left Up Hand
	line(500, 300, 350, 320);

	// Left Down Hand
	line(500, 300, 350, 340);

	// Left Hand Join
	line(350, 320, 350, 340);
	floodfill(355, 332, 15);
	circle(665, 331, 15);
	circle(335, 331, 15);

	// Pocket Horizontal
	line(445, 380, 555, 380);

	// Pocket Tangent
	line(445, 380, 500, 420);

	// Pocket Tangent
	line(500, 420, 555, 380);
	setfillstyle(SOLID_FILL, RED);

	// Bell Pad Upper Horizontal
	line(430, 298, 570, 298);

	// Bell Pad Lower Horizontal
	line(430, 308, 570, 308);

	// Bell Pad Left Join
	line(430, 298, 430, 308);

	// Bell Pad Right Join
	line(570, 298, 570, 308);
	floodfill(432, 302, 15);
	floodfill(568, 302, 15);
	floodfill(500, 307, 15);
	setfillstyle(SOLID_FILL,
				YELLOW);

	// Bell
	circle(500, 323, 15);
	floodfill(502, 325, 15);
	setcolor(BLACK);

	// Inner Bell Upper Line
	line(485, 323, 515, 323);

	// Inner Bell Upper Line
	line(485, 328, 515, 328);
	setcolor(WHITE);

	// Left Leg Left Line
	line(450, 480, 450, 550);

	// Left Leg Right Line
	line(470, 490, 470, 550);

	// Right Leg Right Line
	line(550, 480, 550, 550);

	// Right Leg Left Line
	line(530, 490, 530, 550);

	// Left Leg Pad
	rectangle(440, 550, 480, 570);

	// Right Leg Pad
	rectangle(520, 550, 560, 570);

	// Left Leg Color
	setfillstyle(SOLID_FILL, CYAN);
	floodfill(460, 500, 15);

	// Right Leg Color
	setfillstyle(SOLID_FILL, CYAN);
	floodfill(540, 500, 15);
	getch();
	closegraph();
	return 0;
}
