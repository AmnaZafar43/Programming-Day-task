#include <iostream>
using namespace std;
void display();
int array1[]={1,2,3,4,5};
int array2[]={25,30,38,24,3};
main()
{
display();
}
void display()
{
for(int i=0;i<=4;i++)
 {
 cout <<"Roll no is " <<array1[i]<<endl;
 cout <<"Age is " <<array2[i];
 }
} 