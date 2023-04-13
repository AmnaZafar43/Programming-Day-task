#include <fstream>
#include <iostream>
using namespace std;
main()
{
int value;
fstream f;
f.open("integer.txt",ios::out);
cout <<"Enter value ";
cin >> value;
f<<value;
f.close();
}