#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<iostream>
#include <dos.h>
using namespace std;
int main(){
    char choice;
    do{
        int menu;
        cout << "1. Show name & ID\n2. Show Alphabet (A)\n3. House\n4. Car\n5. Emoji\n6. Bouncing Ball\n7. Starry Night\n\n\nPlease enter your choice : ";
        cin >> menu;
        switch(menu){
        case 1:
            //Show name and id code
            {
                int gd = DETECT, gm;
                initwindow(1000,500,"name");
                //C
                arc(80,165,70,290,40);
                //S
                line(130,130,180,130);
                line(130,200,180,200);
                line(130,130,130,165);
                line(130,165,180,165);
                line(180,165,180,200);
                //E
                line(220,130,220,200);
                line(220,130,260,130);
                line(220,165,245,165);
                line(220,200,260,200);
                //2
                line(280,130,330,130);
                line(280,200,330,200);
                line(280,165,330,165);
                line(330,130,330,165);
                line(280,165,280,200);
                //0
                circle(375,165,40);
                //0
                circle(465,165,40);
                //1
                line(520,130,520,200);
                line(510,200,530,200);
                line(520,130,510,140);
                //0
                circle(575,165,40);
                //1
                line(640,130,640,200);
                line(630,200,650,200);
                line(640,130,630,140);
                //9
                line(670,130,710,130);
                line(670,130,670,165);
                line(710,130,710,165);
                line(670,165,710,165);
                line(710,165,710,200);
                line(710,200,670,200);
                //1
                line(740,130,740,200);
                line(730,200,750,200);
                line(740,130,730,140);
                //7
                line(770,130,820,130);
                line(820,130,770,200);
                //1
                line(840,130,840,200);
                line(830,200,850,200);
                line(840,130,830,140);
                getch();
                closegraph();
            }
            break;
        case 2:
            {
                int gd = DETECT, gm;
                initgraph( &gd, &gm, "");

                line(60,90,90,30);
                line(90,30,120,90);
                line(70,70,110,70);
                getch();
                closegraph();
            }
            break;
        case 3:
            {
               int gd = DETECT,gm;
                initgraph(&gd, &gm, "X:\\TC\\BGI");
                /* Draw Hut */
                setcolor(WHITE);
                rectangle(150,180,250,300);
                rectangle(250,180,420,300);
                rectangle(180,250,220,300);

                line(200,100,150,180);
                line(200,100,250,180);
                line(200,100,370,100);
                line(370,100,420,180);

                /* Fill colours */
                setfillstyle(SOLID_FILL, BROWN);
                floodfill(152, 182, WHITE);
                floodfill(252, 182, WHITE);
                setfillstyle(SLASH_FILL, BLUE);
                floodfill(182, 252, WHITE);
                setfillstyle(HATCH_FILL, GREEN);
                floodfill(200, 105, WHITE);
                floodfill(210, 105, WHITE);
                getch();
                closegraph();
            }
            break;
        case 4:
            {
                int gd = DETECT, gm;
                int i, maxx, midy;

                /* initialize graphic mode */
                initgraph(&gd, &gm, "X:\\TC\\BGI");
                /* maximum pixel in horizontal axis */
                maxx = getmaxx();
                /* mid pixel in vertical axis */
                midy = getmaxy()/2;

                for (i=0; i < maxx-150; i=i+5) {
                    /* clears screen */
                    cleardevice();

                    /* draw a white road */
                    setcolor(WHITE);
                    line(0, midy + 37, maxx, midy + 37);

                    /* Draw Car */
                    setcolor(YELLOW);
                    setfillstyle(SOLID_FILL, RED);

                    line(i, midy + 23, i, midy);
                    line(i, midy, 40 + i, midy - 20);
                    line(40 + i, midy - 20, 80 + i, midy - 20);
                    line(80 + i, midy - 20, 100 + i, midy);
                    line(100 + i, midy, 120 + i, midy);
                    line(120 + i, midy, 120 + i, midy + 23);
                    line(0 + i, midy + 23, 18 + i, midy + 23);
                    arc(30 + i, midy + 23, 0, 180, 12);
                    line(42 + i, midy + 23, 78 + i, midy + 23);
                    arc(90 + i, midy + 23, 0, 180, 12);
                    line(102 + i, midy + 23, 120 + i, midy + 23);
                    line(28 + i, midy, 43 + i, midy - 15);
                    line(43 + i, midy - 15, 57 + i, midy - 15);
                    line(57 + i, midy - 15, 57 + i, midy);
                    line(57 + i, midy, 28 + i, midy);
                    line(62 + i, midy - 15, 77 + i, midy - 15);
                    line(77 + i, midy - 15, 92 + i, midy);
                    line(92 + i, midy, 62 + i, midy);
                    line(62 + i, midy, 62 + i, midy - 15);
                    floodfill(5 + i, midy + 22, YELLOW);
                    setcolor(BLUE);
                    setfillstyle(SOLID_FILL, DARKGRAY);
                    /*  Draw Wheels */
                    circle(30 + i, midy + 25, 9);
                    circle(90 + i, midy + 25, 9);
                    floodfill(30 + i, midy + 25, BLUE);
                    floodfill(90 + i, midy + 25, BLUE);
                    /* Add delay of 0.1 milli seconds */
                    delay(100);
                }

                closegraph();
            }
            break;
        case 5:
            {
                int gd = DETECT,gm;
                initgraph(&gd,&gm,"");

                setcolor(YELLOW);
                setfillstyle(SOLID_FILL,YELLOW);
                circle(100,100,50);//Draw the face
                floodfill(100,100,YELLOW);

                setcolor(BLACK);
                setfillstyle(SOLID_FILL,BLACK);
                ellipse(90,90,5,5,0,360);//left eye
                ellipse(110,90,5,5,0,360);//Draw the right eye

                    setcolor(RED);
                    arc(100,115,200,340,20);//smile


                getch();
                closegraph();
            }
            break;
        case 6:
            {
                int gd = DETECT, gm;
                 int i, x, y, flag=0;
                 initgraph(&gd, &gm, "C:\\TC\\BGI");

                 /* get mid positions in x and y-axis */
                 x = getmaxx()/2;
                 y = 30;


                 while (!kbhit()) {
                  if(y >= getmaxy()-30 || y <= 30)
                     flag = !flag;
                     /* draws the gray board */
                     setcolor(RED);
                     setfillstyle(SOLID_FILL, RED);
                     circle(x, y, 30);
                     floodfill(x, y, RED);

                 /* delay for 50 milli seconds */
                 delay(50);

                 /* clears screen */
                 cleardevice();
                 if(flag){
                     y = y + 5;
                 } else {
                     y = y - 5;
                 }
                    }

                    closegraph();
            }
            break;
        case 7:
            {
                    int gd = DETECT, gm;
                    int i, x, y;
                    initgraph(&gd, &gm, "C:\\TC\\BGI");


                 while (!kbhit()) {
                      /* color 500 random pixels on screen */
                   for(i=0; i<=500; i++) {
                       x=rand()%getmaxx();
                          y=rand()%getmaxy();
                          putpixel(x,y,15);
                      }
                      delay(500);

                      /* clears screen */
                      cleardevice();
                    }

                    closegraph();
            }
            break;
        default:
            cout << "Wrong choice, Please enter valid choice ";
        }
        cout << endl << "Do again ? (y / n) : ";
        cin >> choice;

    }while( choice == 'y' || choice == 'Y');


    return 0;
}
