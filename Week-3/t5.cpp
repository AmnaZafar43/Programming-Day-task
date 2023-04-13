#include <iostream>
using namespace std;
main()
{
int s1,s2,s3,s4,s5,s;
float per;
string n;
cout <<"Enter your name";
cin >> n;
cout <<"Enter subject one marks";
cin >> s1;
cout <<"Enter subject two marks";
cin >> s2;
cout <<"Enter subject three marks";
cin >> s3;
cout <<"Enter subject four marks";
cin >> s4;
cout <<"Enter subject five marks";
cin >> s5;
s=s1+s2+s3+s4+s5;
per=(s/500.0)*100;
cout <<"Name is " <<n <<endl;
cout <<"Percentage is " <<per;
}