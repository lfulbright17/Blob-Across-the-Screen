#include <MeggyJrSimple.h>

struct Point
{
 int x;
 int y;
};

Point p1 = {2, 0};
Point p2 = {3, 0};
Point p3 = {1, 1};
Point p4 = {2, 1};
Point p5 = {3, 1};
Point p6 = {1, 2};
Point p7 = {2, 2};
Point p8 = {3, 2};
Point p9 = {1, 3};
Point p10 = {2, 3};
Point p11 = {3, 3};
Point p12 = {2, 4};
Point p13 = {3, 4};
Point p14 = {3, 5};

Point Array[64] = 
{
  p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14
};

int marker = 14;

void setup()                  
{
  MeggyJrSimpleSetup();   
  Serial.begin(9600);
}

void loop()                    
{
  Blob();//draws the pixels that will move across the screen
    DisplaySlate();
    delay(500);
    ClearSlate();//if you want: if you delete clearslate, the blob will drag!
  for (int m=0; m<14; m++)//m is the number of points in the array
  {
     Array[m].x--; //moving the blob to the left, off the screen
  }
}  

void Blob()
{
  for (int i=0; i<14; i++)
  {
    DrawPx(Array[i].x, Array[i].y, White);
  }
}

//thank you elana for helping me compress my code with the nested loop!
