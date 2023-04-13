#include <fstream>
#include <iostream>
using namespace std;
main()
{
float value;
fstream f;
f.open("float.txt",ios::out);
cout <<"Enter value ";
cin >> value;
f<<value;
f.close();
}