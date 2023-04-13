#include <fstream>
#include <iostream>
using namespace std;
main()
{
char ch;
fstream f;
f.open("character.txt",ios::out);
cout <<"Enter a character ";
cin >> ch;
f<<ch;
f.close();
}