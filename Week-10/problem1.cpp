#include <iostream>
using namespace std;

char word[100];

void input_value(int size)
{
    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter character : ";
        cin >> word[idx];
    }
}

void letter_count(char letter)
{
    int count = 0;
    for (int idx = 0; word[idx] != '\0'; idx++)
    {
        if (word[idx] == letter)
        {
            count++;
        }
    }

    if (count != 0)
    {
        cout << letter << " comes for " << count << " times";
    }
    else
    {
        cout << "Does not found in array ";
    }
}

main()
{
    char letter;
    int size;

    cout << "Enter the number of characters you want to enter : ";
    cin >> size;

    input_value(size);

    cout << "Enter the letter you want to find : ";
    cin >> letter;
    letter_count(letter);
}