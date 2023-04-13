#include <iostream>
using namespace std;

int number[100];
int new_array[98];
int count = 0;

void input_value(int size)
{
    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter number : ";
        cin >> number[idx];
    }
}

void mini_peaks(int size)
{

    for (int idx = 1; idx < size - 1; idx++)
    {
        if (number[idx] > number[idx - 1] && number[idx] > number[idx + 1])
        {
            new_array[count] = number[idx];
            count++;
        }
    }
}

main()
{
    char letter;
    int size;

    cout << "Enter the number of elements you want to enter : ";
    cin >> size;

    input_value(size);

    mini_peaks(size);

    if (count != 0)
    {
        for (int idx = 0; idx < count; idx++)
        {
            cout << new_array[idx] << endl;
        }
    }
    else
    {
        cout << "No such numbers exist ";
    }
}