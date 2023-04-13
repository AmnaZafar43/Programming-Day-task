#include <iostream>
#include <conio.h>
#include <string.h>
#include <fstream>
using namespace std;
struct player
{
    string name;
    int position;
    int yards;
    int recieve_yards;
    int catches;
    int rushing_yards;
};
void input(player array[]);
void output(player array[]);

main()
{
    player array[1];
    input(array);
    output(array);
}
void input(player array[])
{
    cout << "Enter player name ";
    cin >> array[0].name;
    cout << "Enter player position ";
    cin >> array[0].position;
    cout << "Enter player yards ";
    cin >> array[0].yards;
    cout << "Enter player catches ";
    cin >> array[0].catches;
}
void output(player array[])
{
    cout << array[0].name << endl;
    cout << array[0].position << endl;
    cout << array[0].yards << endl;
    cout << array[0].catches << endl;
}
