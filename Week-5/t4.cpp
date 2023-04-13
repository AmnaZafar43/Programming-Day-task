#include <iostream>
using namespace std;
main()
{
int date;
string month;
cout <<"Enter your date of birth";
cin >> date;
cout <<"Enter your month of birth";
cin >> month;
if(month=="april")
{
	if(date<=19)
	{
		cout <<"Zodaic sign is Aries" <<endl;
		cout <<"Symbol is The ram";
	}
	if(date>=20)
	{
		cout <<"Zodaic sign is Taurus";
		cout <<"Symbol is The Bull";
	}
}
if(month=="may")
{
        if(date<=20)
        {
                cout <<"Zodaic sign is Taurus" <<endl;
                cout <<"Symbol is The Bull";
        }
        if(date>=21)
        {
                 cout <<"Zodaic sign is Gemini" <<endl;
                 cout <<"Symbol is The twins";
        } 
}
if(month=="june")
{
        if(date<=20)
        {
                  cout <<"Zodaic sign is Gemini" <<endl;
                  cout <<"Symbol is The twins";
        }
        if(date>=20)
        {
                  cout <<"Zodaic sign is Cancer" <<endl;
                  cout <<"Symbol is The crab";
         }
}
if(month=="july")
{
        if(date<=22)
        {
                  cout <<"Zodaic sign is Cancer" <<endl;
                  cout <<"Symbol is The Crab";
         }
         if(date>=23)
         {
                  cout <<"Zodaic symbol is Leo" <<endl;
                  cout <<"Symbol is The Lion";
         }
}
if(month=="august")
{
         if(date<=22)
         {
                  cout <<"Zodaic symbol is Leo" <<endl;
                  cout <<"Symbol is The lion";
         }
         if(date>=23)
         {
         cout <<"Zodaic sign is Virgo" <<endl;
         cout <<"Symbol is THE Virgin";
         }
}
if(month=="september")
{
         if(date<=22)
         {
                  cout <<"Zodaic sign is Virgo" <<endl;
                  cout <<"Symbol is The Virgin";
         }
         if(date>=23)
         {
                  cout <<"Zodaic symbol is Libra" <<endl;
                  cout <<"Symbol is The sacles";
         }
}
if(month=="october")
{
         if(date<=23)
         {
                  cout <<"Zodaic sign is Scorpio" <<endl;
                  cout <<"Symbol is The Scorpion";
         }
         if(date>=23)
         {
                  cout <<"Zodaic symbol is scorpio" <<endl;
                  cout <<"Symbol is The Scorpion";
         }
}
if(month=="november")
{
         if(date<=21)
         {
                  cout <<"Zodaic sign is Scorpio" <<endl;
                  cout <<"Symbol is The Scorpion";
         }
         if(date>=22)
         {
                  cout <<"Zodaic symbol is sigittaratius" <<endl;
                  cout <<"Symbol is The archer";
         }
}
if(month=="december")
{
         if(date<=21)
         {
                  cout <<"Zodaic sign is Sigittaratius" <<endl;
                  cout <<"Symbol is The Archer";
         }
         if(date>=22)
         {
                  cout <<"Zodaic symbol is capricorn" <<endl;
                  cout <<"Symbol is The goat";
         }
}
if(month=="january")
{
         if(date<=19)
         {
                  cout <<"Zodaic sign is capricorn" <<endl;
                  cout <<"Symbol is The goat";
         }
         if(date>=20)
         {
                  cout <<"Zodaic symbol is aqaurius" <<endl;
                  cout <<"Symbol is The bearer";
         }
}



