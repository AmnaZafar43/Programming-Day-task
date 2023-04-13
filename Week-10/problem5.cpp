#include <iostream>
using namespace std;

int number[100];
int cycle_array[50];

void input_value(int size)
{
    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter number : ";
        cin >> number[idx];
    }
}

void sort(int size)
{
    int min;
    int index = 0;
    int temp;
    for (int idx = 0; idx < size; idx++)
    {
        min = 1000000;
        for (int i = idx; i < size; i++)
        {
            if (min > number[i])
            {
                min = number[i];
                index = i;
            }
        }
        temp = number[idx];
        number[idx] = min;
        number[index] = temp;
    }
}

bool consecutive_numbers(int size)
{
    sort(size);
    for (int idx = 0; idx < size - 1; idx++)
    {
        if (number[idx] + 1 != number[idx + 1])
        {
            return false;
        }
    }
    return true;
}

main()
{
    int size;

    cout << "Enter the size of array : ";
    cin >> size;

    input_value(size);

    if (consecutive_numbers(size))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}