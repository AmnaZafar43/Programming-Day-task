#include <iostream>
#include <fstream>
#include <conio.h>
#include <conio.h>
#include <string>
#include <windows.h>
using namespace std;
void finals();
main()
{
    finals();
}
void finals()
{
    int row, col, size_row, size_col;
    string option;
    // no of rows of matrix
    cout << "Enter no of rows ";
    cin >> row;
    // no of columns of matrix
    cout << "Enter no of columns " << endl;
    cin >> col;
    cout << "Enter your option for change row/column/both..... ";
    cin >> option;
    if(option == "row" || option == "Row")
    {
        // how any times row can change
        cout << "How many times you want to made change in row ";
        cin >> size_row;
    }
    if (option == "col" || option == "column")
    {
        // how many time column can change
        cout << "How many times you want to made change in column ";
        cin >> size_col;
    }
    if (option == "both" || option == "Both")
    {
        // how any times row can change

        cout << "How many times you want to made change in row ";
        cin >> size_row;

        // how many time column can change
        cout << "How many times you want to made change in column ";
        cin >> size_col;
    }
    int matrix[row][col];
    int change_row[size_row];
    int change_col[size_col];
    //-----------------matrix-----------------
    cout << "Enter matrix ";
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
        cout << endl;
    }
    //---------------------------------------
    cout << endl;
    //----------------input for increment in rows
    cout << "Enter the r of increment " << endl;
    for (int i = 0; i < size_row; i++)
    {
        cin >> change_row[i];
    }
    //------------------------------------------------
    cout << endl;
    //----------------------input for increment in column
    cout << "Enter no of c of increment " << endl;
    for (int i = 0; i < size_col; i++)
    {
        cin >> change_col[i];
    }
    //------------------------------------------------
    cout << endl;
    if (option == "Row" || option == "row")
    {

        //-----------Change in rows-------------
        for (int i = 0; i < size_row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                matrix[change_row[i]][j] = matrix[change_row[i]][j] + 1;
            }
            cout << endl;
        }
    }
    if (option == "Column" || option == "column" || option == "col")
    {

        //--------------Change in columns-----------
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < size_col; j++)
            {
                matrix[i][change_col[j]] = matrix[i][change_col[j]] + 1;
            }
            cout << endl;
        }
    }
    if(option == "both" || option == "Both")
    {
        //-----------Change in rows-------------
        for (int i = 0; i < size_row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                matrix[change_row[i]][j] = matrix[change_row[i]][j] + 1;
            }
            cout << endl;
        }
        //--------------Change in columns-----------
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < size_col; j++)
            {
                matrix[i][change_col[j]] = matrix[i][change_col[j]] + 1;
            }
            cout << endl;
        }
    }
    cout << "                Output                  " << endl;
    //------------------Output-----------------
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}