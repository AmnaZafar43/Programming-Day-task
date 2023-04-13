#include <iostream>
using namespace std;
int main()
{
int num;
int count=0;
cout <<"Enter integer ";
cin >> num;
while(num!=-999)
{
cout << num%(count+1) <<" ";
cin >>num;
count++;
}
cout<<endl;
return 0;
}