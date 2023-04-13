#include <iostream>
using namespace std;
int rollno[]={1,2,3,4,5};
float cgpa[]={2.66,2.7,3.6,3.7,3.5};
void findcgpa(int num);
main()
{
int n1;
cout <<"Enter roll no for cgpa" <<endl;
cin >> n1;
findcgpa(num);
}
void findcgpa()
{
for(int i=0;i<5;i++)
{
if(rollno[i]==num)
{
cout <<"Roll no is equal to " <<rollno[i] <<"\t";
cout <<"Cgpa is equal to " <<cgpa[i] <<endl;
}
}
}
