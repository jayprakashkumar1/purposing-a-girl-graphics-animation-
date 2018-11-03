// C code to illustrate
// animation graphics in linux enviornment
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
int main()
{
    int i,j,k=0;
    int gd, gm;
    int xmax;

    gd=DETECT;         // Detect the graphics driver
    initgraph(&gd, &gm, NULL);

        xmax=getmaxx();

    srand(time(0)); 
// sky
// for(j=0;j<=100;j++)
// {
//     putpixel(rand()%xmax,rand()%50,rand()%15);
// } 
   setbkcolor(8);
    outtextxy(getmaxx()/2,getmaxy()/2,"Loading ");
    for(i=1;i<=5;i++)
    {   outtextxy(getmaxx()/2+50+5*i,getmaxy()/2,".");
        delay(1000);
    }

j=0;    
k=0;  
    for(i=1;i<=280;i++)
{
  //setbkcolor(i%16);

  cleardevice();
// sky
// for(j=0;j<=100;j++)
// {
//     putpixel(rand()%xmax,rand()%50,rand()%15);
// } 
j=0;
        if(i==1)
        {
            outtextxy(100,40,"Aryan");
            outtextxy(xmax-100,40,"Alia");
        }



  if(i==280)
  {     j=70;
        k=50;
      //  delay(3000);
      outtextxy(300,100,"Hey,This is for You !");
  }
// boy head 
    circle(100+i,100+j,30); 
// boy eye 
    arc(90+i,90+j,20,160,5);
    circle(90+i,89+j,1);
    arc(90+i,90+j,200,340,6);
// smile
    arc(100+i,110+j,30,150,10); 
    circle(100+i,110+j,1);   

// body line
    line(100+i,130+j,100+i,230+j);
// hand    
    line(100+i,150+j,130+i,180+j);
    line(130+i,180+j,144+i+k,140+j-k);
//fingers
    arc(150+i+k,130+j-k,30,190,10);
// flower
 setcolor(RED);
    line(150+i+k,120+j-k,150+i+k,160+j-k);
    ellipse(150+i+k,110+j-k,20,180,5,20);
    ellipse(150+i+k,110+j-k+2,20,180,5,20);
    ellipse(150+i+k,110+j-k+4,20,180,5,20);
    ellipse(150+i+k,110+j-k+8,20,180,5,20);


  setcolor(WHITE);   
// legs
    line(100+i,230+j,80+i,240+j);
    line(100+i,230+j,125+i,240+j);

    // girlbody 

// girl head 
    circle(xmax-100,100,30); 
  //  line(xmax-100,130,xmax-100+40,130);
  //  line(xmax-100,130,xmax-100-40,130);
  setcolor(LIGHTGRAY);
    ellipse(xmax-100,130,180+20,360-20,40,65);
    ellipse(xmax-100,130,180+20,360-20,41,67);
   // ellipse(xmax-100,130,180+20,360-20,42,69);
setcolor(WHITE);
  //  arc(xmax-100,130,180,0,60);

// girl eye 
    arc(xmax-90,90,20,160,5);
    circle(xmax-90,89,1);
    arc(xmax-90,90,200,340,6);

     arc(xmax-90-20,90,20,160,5);
    circle(xmax-90-20,89,1);
    arc(xmax-90-20,90,200,340,6);
// girl smile
    arc(xmax-100,110,30,150,10); 
    circle(xmax-100,110,1);
   

// girl body
    line(xmax-100,130,xmax-100,180);
// girl hand    
    line(xmax-100,130,xmax-120,160); // left
    line(xmax-100,130,xmax-100+20,160); // right
    line(xmax-100+20,160,xmax-100,180);    //right side below hand  

//movable hand
// for accepting proposal
    line(xmax-120,160,xmax-100,180);    //lefft side below hand 
    int vertices[]={xmax-100,180,
                    xmax-100-30,180+50,
                    xmax-100+30,180+50,
                    xmax-100,180}; 
    drawpoly(4,vertices);


// girl fingers

// girl legs
    line(xmax-100-20,180+50,xmax-120,230+30);
    line(xmax-100+20,180+50,xmax-80,230+30);
   
    if(i==1)
    delay(3000);
   
    if(i==280)
  {    delay(1000);
       outtextxy(400+60,50,"Thank You, Aryan ");
    setcolor(8);
    line(xmax-120,160,xmax-100,180);    //lefft side below hand 
    setcolor(3);
//fingers
    line(xmax-120,160,150+i+k,120+j-10);    //lefft side below hand 
  }
    delay(10); 
}
    delay(2000);
    getchar();
   // close the  graphics mode and deallocates the memory for graphics mode
    closegraph();
    return 0;
}