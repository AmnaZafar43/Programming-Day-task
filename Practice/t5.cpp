#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int share();
main()
{
    int result;
    result = share();
    cout << result;
}
int share()
{
    int count = 0;
    string n1, n2;
    char ch;
    cout << "Enter letter one ";
    cin >> n1;
    cout << "Enter letter two ";
    cin >> n2;
    for (int i = 0; i < n1.length(); i++)
    {
        for (int j = 0; j < n2.length(); j++)
        {

            ch = n1[i];
            if (ch == n2[j])
            {
                count++;
            }
        }
    }
    return count;
}