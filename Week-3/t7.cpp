#include <iostream>
using namespace std;
int main()
{
float bsize,bcost,area;
float costfpp,costapsf;
cout <<"Enter size of fertilizer bag in pound";
cin >> bsize;
cout <<"Enter cost of the bag";
cin >> bcost;
cout <<"Enter area in square feet that bag covered";
cin >> area;
costfpp=bcost/bsize;
costapsf=bcost/area;
cout <<"Cost per pound of fertlizer is " <<costfpp <<endl;
cout <<"Cost per square foot of fertilizer is " <<costapsf;
}

