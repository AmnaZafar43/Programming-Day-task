#include <iostream>
using namespace std;
main()
{
string name;
int price;
float disc,fprice;
cout <<"Enter country name";
cin >> name;
cout <<"Enter ticket price in dollars";
cin >> price;
if(name=="Ireland")
{
disc=price*(10.0/100.0);
fprice=price-disc;
cout <<"Discount on ticket is " <<disc <<endl;
cout <<"Final price after discount is " <<fprice;
}
else
{
disc=price*(5.0/100.0);
fprice=price-disc;
cout <<"Discount on ticket is " <<disc <<endl;
cout <<"Final price after discount is " <<fprice;
}
}