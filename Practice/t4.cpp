#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
void tweaker();
main()
{
    tweaker();
}
void tweaker()
{
    string word;
    char ch,a;
    int arr[5];
    cout <<"Enter a word ";
    cin >> word;
    cout << "Enter array ";
    for(int i = 0;i < 5;i++)
    {
      cin >> arr[i];
    }
       for(int i=0;i<5;i++)
        {
           ch = word[i];
           a = ch + arr[i];
           cout << a;
        }

}