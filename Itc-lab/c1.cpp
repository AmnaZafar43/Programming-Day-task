#include <iostream>
#include <fstream>
using namespace std;
void data();
int age;
fstream f;
string name;
main()
{
cout <<"Enter name ";
cin >> name;
cout <<"Enter age ";
cin >> age;
data();
f.open("names.txt",ios::in);
f << name;
f << ",";
f << age;
f.close();
}
void data()
{
f.open("names.txt",ios::out);
if(age%2==0)
{
   for(int i=0;i<=14;i++)
   {
       cout <<"#";
   }
       cout <<endl;
       cout <<"#" <<" " <<age <<" " <<"HB" <<" " <<name <<"!" <<" " <<age <<"#" <<endl;
       for(int i=0;i<=14;i++)
       {
          cout <<"#";
       }
}
else
{
    for(int i=0;i<=14;i++)
    {
       cout <<"*";
    }
       cout <<endl;
       cout <<"*" <<" " <<age <<" " <<"HB" <<" " <<name <<"!" <<" " <<age <<"*" <<endl;
       for(int i=0;i<=14;i++)
       {
         cout <<"*";
       }
}
f.close();
}