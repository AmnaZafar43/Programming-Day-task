#include <iostream>
using namespace std;
float average ();
string name [30] ;
float exmarks [30] ;
main()
{
int num;
cout <<"Enter size ";
cin >> num;
for(int i=0;i<num;i++)
{
cout <<"Enter name";
cin >> name[i];
cout <<"Enter exmarks";
cin >> exmarks[i];
}
cout <<average(num);
}
float average()
{
int sum=0;
float avg;
for(int i=0;i<num;i++)
{
sum=sum/num;
return avg;
}
}
int sort-array(int start,int num)
{
int l=average[start];
int ln=start;
for(int i=start;i<=num;start++)
{
if(average[i]>l)
{
l=average[i];
ln=i;
int temp=average[start];
average[start]=l;
average[n]=temp;
sort-array();
}
}