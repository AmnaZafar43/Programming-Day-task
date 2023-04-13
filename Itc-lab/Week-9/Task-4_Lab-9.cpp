#include <iostream>
#include <string>
using namespace std;

string ch(string st) 
{

	int letter;
	
	for (int x = 0; x < st.length(); x++)
	{
		letter = int(st[x]);

		if (letter == 90)
		{
			st[x] = char(65);
		}
		else if (letter == 122)
		{
			st[x] = char(97);
		}
		else if (letter >= 65 && letter <= 90 || letter >= 97 && letter <= 122)
		{
			st[x] = char(letter + 1);
		}
	
	}
	return st;
}

int main() 
{
	string s = "Aslam";
	cout << "Input: "<<s<< endl; 
	cout << "Output: " << ch(s);
	return 0;
}
