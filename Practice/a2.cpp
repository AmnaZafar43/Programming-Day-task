#include<iostream>
#include<fstream>
#include<conio.h>
#include<conio.h>
#include<string>
#include<windows.h>
using namespace std;
struct studentType
{
   string first_name;
   string last_name;
   int testScore;
   char grade;
};
void input(studentType array[]);
void read_input(studentType array[]);
void grade(studentType array[]);
void find_high(studentType array[]);
main()
{
    studentType array[2];
    input(array);
    read_input(array);
    grade(array);
    find_high(array);
}
void input(studentType array[])
{
    cout << "Enter name of students....  ";
    for (int i = 0; i < 2;i++)
    {
        cin >> array[i].first_name;
        cout << "Enter last name....  ";
        cin >> array[i].last_name;
        cout << "Enter test score of student....  ";
        cin >> array[i].testScore;
    }
    cout<<endl;
}
void read_input(studentType array[])
{
    cout << "First Name\tLast Name\tTest scores\tGrades" << endl;
    for (int i = 0; i < 2;i++)
    {
        cout << array[i].first_name << "\t\t" << array[i].last_name << "\t\t" << array[i].testScore<<"\t\t"<<array[i].grade << endl;
    }
}
void grade(studentType array[])
{
    for (int i = 0; i < 2;i++)
    {
        if(array[i].testScore=90 && array[i].testScore<=100)
        {
            array[i].grade = 'A';
        }
        else if(array[i].testScore=80 && array[i].testScore<=89)
        {
            array[i].grade = 'B';
        }
        else if (array[i].testScore = 70 && array[i].testScore <= 79)
        {
            array[i].grade = 'C';
        }
        else if (array[i].testScore = 60 && array[i].testScore <= 69)
        {
            array[i].grade = 'D';
        }
        else if (array[i].testScore = 50 && array[i].testScore <= 59)
        {
            array[i].grade = 'E';
        }
        else if(array[i].testScore<=49)
        {
            array[i].grade = 'F';
        }
        else
        {
            cout << "Invalid grade ";
        }
    }
}
void find_high(studentType array[])
{
    int max = 0;
    for (int i = 0; i < 2;i++)
    {
        if(array[i].testScore>max)
        {
            max = array[i].testScore;
        }
        cout << array[i].first_name << "," << array[i].last_name << "," << array[i].testScore << "," << array[i].grade << endl;
        break;
    }
    
}