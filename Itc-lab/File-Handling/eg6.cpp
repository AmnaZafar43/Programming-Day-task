#include <fstream>
#include <iostream>
using namespace std;
main()
{
char ch;
fstream f;
f.open("character.txt", ios::in);
f>>ch;
cout <<ch;
f.close();
}