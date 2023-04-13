#include <iostream>
using namespace std;
main()
{
int holidays,wdays,tgames,diff;
float hour,min;
cout <<"Enter holidays";
cin >> holidays;
wdays=365-holidays;
tgames=wdays*63+holidays*127;
diff=30000-tgames;
hour=diff/60;
min=diff%60;
if(diff>3000)
{
cout <<"Tom sleeps well" <<endl;
cout <<"Time for play is " <<hour <<"hours" <<" " <<min <<"minutes";
}
else
{
cout <<"Tom will run away" <<endl;
cout <<"Time for play is " <<hour <<"hours" <<" " <<min <<"minutes";
}
} 