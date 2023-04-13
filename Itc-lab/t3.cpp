#include <iostream>
#include <cmath>
using namespace std;

int calculator(int a,int b,char op);

main()
{
int x,y,r1,r2,r3,r4,r5;
char op;
cout <<"Enter first value ";
cin >> x;
cout <<"Enter second value ";
cin >> y;
cout <<"Enter operator ";
cin >> op;
r1=calculator(x,y,op);
cout <<"Result is " <<r1;
r2=calculator(x,y,op);
cout <<"Result is " <<r2;
r3=calculator(x,y,op);
cout <<"Result is " <<r3;
r4=calculator(x,y,op);
cout <<"Result is " <<r4;
r5=calculator(x,y,op);
cout <<"Result is " <<r5;
}
int calculator(int a,int b,char op);
if(ope=='+')
{
double sum=a+b;
return sum;
}
if(ope=='-')
{
int sub=a-b;
return sub;
}
if(ope=='*')
{
int mul=a*b;
return mul;
}
if(ope=='/')
{
float div=a/b;
return div;
}
if(ope=='%')
{
int mod=a%b;
return mod;
}
