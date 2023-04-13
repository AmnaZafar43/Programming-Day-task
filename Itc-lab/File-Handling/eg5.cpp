#include <fstream>
#include <iostream>
using namespace std;
main()
{
int rollno;
string name;
float cgpa;
fstream f;
f.open("result_card.txt",ios::out);
cout <<"Enter Name ";
cin >> name;
cout <<"Enter your Roll Number ";
cin >> rollno;
cout <<"Enter your CGPA ";
cin >> cgpa;
f<<name <<"\t" <<rollno <<"\t" <<cgpa;
f.close();
}