#include <iostream>
using namespace std;
int main()
{
string name;
int atprice,atsold,ctprice,ctsold,profit,a,b,c;
float per;
cout <<"Enter movie name";
cin >> name;
cout <<"Enter adult ticket price";
cin >> atprice;
cout <<"Enter adult ticket sold";
cin >> atsold;
cout <<"Enter child ticket price";
cin >> ctprice;
cout <<"Enter child ticket sold";
cin >> ctsold;
cout <<"Enter percentage of value amount is to be donated";
cin >> per;
a=(atprice*ctprice)+(atsold*ctsold);
b=per/100.0;
c=per*a;
profit=c-a;
cout <<"Total amount of sold tickets is " <<a <<endl;
cout <<"Profit amount after donating is " <<profit;
}