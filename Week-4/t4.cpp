#include <iostream>
using namespace std;
main()
{
int redroses,tulips,whiteroses;
float disc,fprice,tprice;
cout <<"Enter no of red roses";
cin >> redroses;
cout <<"Enter no of white roses";
cin >> whiteroses;
cout <<"Enter no of tulips";
cin >> tulips;
tprice=(redroses*2.0)+(tulips*2.5)+(whiteroses*4.1);
if(tprice>200)
{
disc=tprice*20.0/100.0;
fprice=tprice-disc;
cout <<"Total price of flowers is " <<tprice <<endl;
cout <<"Discount on flowers is " <<disc <<endl;
cout <<"Final price after discount is " <<fprice;
}
}
