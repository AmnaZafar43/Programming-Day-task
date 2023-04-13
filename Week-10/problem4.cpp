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

bool isRepeatingCycle(int size, int cycle)
{

    for (int idx = 0; idx < cycle; idx++)
    {
        cycle_array[idx] = number[idx];
    }

    int idx = 0;
    for (int x = 0; x < size; x++)
    {
        int count = 0;

        for (int i = 0; i < cycle; i++)
        {
            if (cycle_array[i] == number[idx])
            {
                count++;
            }
            else
            {
                return false;
            }
            idx++;
        }
    }
    return true;
}

main()
{
    int size, cycle;

    cout << "Enter the size of array : ";
    cin >> size;

    input_value(size);

    cout << "Enter the size of cycle : ";
    cin >> cycle;

    if (isRepeatingCycle(size, cycle))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}