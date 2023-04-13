#include <iostream>
#include <fstream>
#include <conio.h>
#include <conio.h>
#include <string>
#include <windows.h>
using namespace std;
struct menuItemType
{
    string menuItem;
    float menuPrice;
};
void getData(menuItemType array[]);
string parseData(string record, int field);
void show_menu(menuItemType array[]);
main()
{
    menuItemType array[8];
1    getData(array);
    show_menu(array);
}
void getData(menuItemType array[])
{
    string word;
    int item = 0;
    fstream file;
    file.open("item.txt", ios::in);
    if (!file)
        return;
    while (!file.eof())
    {
        getline(file, word);
        if (word != " " && word != "" && word != "\0")
        {
            array[item].menuItem = parseData(word, 1);
            array[item].menuPrice = stof(parseData(word, 2));
            item++;
        }
    }
    getch();
    file.close();
}
string parseData(string record, int field)
{
    int commacount = 1;
    string item;
    int index = 0;
    while (true)
    {
        char ch = record[index];
        if (ch == '\0')
        {

            return item;
        }
        if (ch == ',')
        {
            commacount++;
        }
        else if (commacount == field)
        {
            item = item + ch;
        }
        index++;
    }
    return item;
} 
void show_menu(menuItemType array[])
{
    cout << "Item name\tItem price" << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << array[i].menuItem << "\t\t" << array[i].menuPrice << endl;
    }
}