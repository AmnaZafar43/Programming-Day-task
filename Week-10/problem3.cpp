#include <iostream>
using namespace std;

int number[100];

void input_value(int size)
{
    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter number : ";
        cin >> number[idx];
    }
}

void find_odd(int size)
{

    for (int idx = 0; idx < size; idx++)
    {
        int count = 0;
        for (int x = 0; x < size; x++)
        {
            if (number[idx] == number[x])
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            cout << number[idx] << endl;
            number[idx] = 0;
        }
    }
}

main()
{
    char letter;
    int size;

    cout << "Enter the size of array : ";
    cin >> size;

    input_value(size);

    find_odd(size);
}