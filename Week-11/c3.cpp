#include <iostream>
#include <fstream>
using namespace std;
void encrypt(string morse);

fstream file;
int main()
{
    string morse;
    cout << "Enter Your String: ";
    getline(cin,morse);
    encrypt(morse);
}
void encrypt(string morse)
{
    
    string b;
    file.open("encrypt.txt", ios::out);
    int length = sizeof(morse) / sizeof(morse[0]);
    for (int i = 0; i < length; i++)
    {
        if (morse[i] == 'A' || morse[i] == 'a')
        {
            b = ".-";
            file << b << " ";
        }
        else if (morse[i] == 'B' || morse[i] == 'b')
        {
            b = "-...";
            file << b << " ";
        }
        else if (morse[i] == 'C' || morse[i] == 'c')
        {
            b = "-.-.";
            file << b << " ";
        }
        else if (morse[i] == 'D' || morse[i] == 'd')
        {
            b = "-..";
            file << b << " ";
        }
        else if (morse[i] == 'E' || morse[i] == 'e')
        {
            b = ".";
            file << b << " ";
        }
        else if (morse[i] == 'F' || morse[i] == 'f')
        {
            b = "..-.";
            file << b << " ";
        }
        else if (morse[i] == 'G' || morse[i] == 'g')
        {
            b = "--.";
            file << b << " ";
        }
        else if (morse[i] == 'H' || morse[i] == 'h')
        {
            b = "....";
            file << b << " ";
        }
        else if (morse[i] == 'I' || morse[i] == 'i')
        {
            b = "..";
            file << b << " ";
        }
        else if (morse[i] == 'J' || morse[i] == 'j')
        {
            b = ".---";
            file << b << " ";
        }
        else if (morse[i] == 'K' || morse[i] == 'k')
        {
            b = "-.-";
            file << b << " ";
        }
        else if (morse[i] == 'L' || morse[i] == 'l')
        {
            b = ".-..";
            file << b << " ";
        }
        else if (morse[i] == 'M' || morse[i] == 'm')
        {
            b = "--";
            file << b << " ";
        }
        else if (morse[i] == 'N' || morse[i] == 'n')
        {
            b = "-.";
            file << b << " ";
        }
        else if (morse[i] == 'O' || morse[i] == 'o')
        {
            b = "---";
            file << b << " ";
        }
        else if (morse[i] == 'P' || morse[i] == 'p')
        {
            b = ".--.";
            file << b << " ";
        }
        else if (morse[i] == 'Q' || morse[i] == 'q')
        {
            b = "--.-";
            file << b << " ";
        }
        else if (morse[i] == 'R' || morse[i] == 'r')
        {
            b = ".-.";
            file << b << " ";
        }
        else if (morse[i] == 'S' || morse[i] == 's')
        {
            b = "...";
            file << b << " ";
        }
        else if (morse[i] == 'T' || morse[i] == 't')
        {
            b = "-";
            file << b << " ";
        }
        else if (morse[i] == 'U' || morse[i] == 'u')
        {
            b = "..-";
            file << b << " ";
        }
        else if (morse[i] == 'V' || morse[i] == 'v')
        {
            b = "...-";
            file << b << " ";
        }
        else if (morse[i] == 'W' || morse[i] == 'w')
        {
            b = ".--";
            file << b << " ";
        }
        else if (morse[i] == 'X' || morse[i] == 'x')
        {
            b = "-..-";
            file << b << " ";
        }
        else if (morse[i] == 'Y' || morse[i] == 'y')
        {
            b = "-.--";
            file << b << " ";
        }
        else if (morse[i] == 'Z' || morse[i] == 'z')
        {
            b = "--..";
            file << b << " ";
        }
        else if(morse[i]==' ')
        {
            b="-.-.-.- ";
            file << b << " ";
        }
    }
    file.close();
    string data;
    file.open("encrypt.txt",ios::in);
    getline(file,data);
    file.close();
    cout<< data;
}