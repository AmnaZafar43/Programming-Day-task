#include <fstream>
#include <iostream>
using namespace std;
main()
{
string name;
name="Amna Zafar";
fstream f;
f.open("My.txt",ios::out);
f<<name;
f.close();
}