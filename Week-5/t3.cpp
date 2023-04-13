#include <iostream>
using namespace std;
main()
{
string name;
int s1,s2,s3,s4,s5,sum;
float per;
cout <<"Enter student name";
cin >> name;
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
sum=s1+s2+s3+s4+s5;
per=sum/500.0*100;
cout <<"Percentage is " <<per <<endl;
if(per>=90 && per<=100)
{
cout <<"A+";
}
if(per>=80 && per<90)
{
cout <<"A";
}
if(per>=70 && per<80)
{
cout <<"B+";
}
if(per>=60 && per<70)
{
cout <<"B";
}
if(per>=50 && per<60)
{
cout <<"C";
}
if(per>=40 && per<50)
{
cout <<"D";
}
if(per<40)
{
cout <<"F";
}
}