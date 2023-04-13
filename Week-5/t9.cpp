#include <iostream>
using namespace std;
int main()
int h,x,y;
cout <<"Enter value of h";
cin >> h;
cout <<"Enter value of x coordinate";
cin >> x;
cout <<"Enter value of y coordinate";
cin >> y;
if(x<6 && y<2)
{
cout <<"Inside";
}
if(((y>2) && (y<8)) && ((x>2) && (x<4)))
{
cout <<"Inside";
}
if(((x>=0) && (x<2)) && (y>2))
{
cout <<"Outside";
}
if((y>8) && ((x>=2) && (x<=4)))
{
cout <<"Outside";
}
if((y>2) && (x>4))
{
cout <<"Outside";
}
if((y==2) && ((x>=0) && (x<2)))
{
cout <<"Border";
}
if((x==2) && ((y>=2) && (y<=8)))
{
cout <<"Border";
}
}