#include <iostream>
#include <fstream>
using namespace std;
fstream file;
const int MAX_CHAR = 26;
void store(string input);
void missingChars(string str);
int main()
{
    string input;
    cout << "Enter String: ";
    cin >> input;
    store(input);
    missingChars(input);
    return 0;
}
void missingChars(string str)
{
    bool present[MAX_CHAR] = {false};
    int length=sizeof(str)/sizeof(str[0]);
    for (int i = 0; i < length; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            present[str[i] - 'a'] = true;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            present[str[i] - 'A'] = true;
        }
    }
    string res = "";
    for (int i = 0; i < MAX_CHAR; i++)
    {
        if (present[i] == false)
        {
            res.push_back((char)(i + 'a'));
        }
    }
    file.open("alphabet.txt", ios::app);
    file << res << endl;
}
void store(string input)
{
    file.open("alphabet.txt", ios::app);
    file << input << endl;
    file.close();
}