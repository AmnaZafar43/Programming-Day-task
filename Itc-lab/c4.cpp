#include <iostream>
#include <fstream>
using namespace std;
void store(string input);
void data();
int main()
{
    string input;
    cout << "Enter A String: ";
    getline(cin,input);
    store(input);
    data();
    return 0;
}
void store(string input)
{
    fstream file;
    file.open("data.txt",ios::out);
    file << input << endl;
    file.close();
}
void data()
{
    int idx=0;
    string input;
    fstream file;
    file.open("data.txt",ios::in);
    getline(file,input);
    file.close();
    // first extract the location of alphabets in string..
    int length=sizeof(input)/sizeof(input[0]);
    for (int i = 0; i < length; i++)
    {
        if (input[i] == '\"')
        {
            idx=i;
            break;
        } 
    }
    if (idx==0)
    {
        cout<<"\"What... why did you make this?\"";
        exit(0);
    }
    
    // now extract the alphabets from the string..
    for (int i = idx; i < 1000; i++)
    {
        if (input[i+1] == '\"')
        {
            cout<<input[i]<<"\"";
           break; 
        }
        else
        {
            cout<<input[i];
        }
    }
}