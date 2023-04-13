#include <iostream>
using namespace std;
main()
{
string temp,humid;
cout <<"Enter temperature";
cin >> temp;
cout <<"Enter humidity";
cin >> humid;
if(temp=="warm" && humid=="dry")
{
cout <<"Play tennis";
}
if(temp=="warm" && humid=="humid")
{
cout <<"Swim";
}
if(temp=="cold" && humid=="dry")
{
cout <<"Play Basketball";
}
if(temp=="cold" && humid=="humid")
{
cout <<"Watch tv";
}
}