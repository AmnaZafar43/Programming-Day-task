#include<iostream>
using namespace std;

int main()
{
	int count = 0;
	char arr[] = "Mujtaba" ;

	for (int i=0 ; i<=6;i++)
	{
		if(arr[i] == 'a'||arr[i]== 'e'||arr[i]== 'i'||arr[i]== 'o'||arr[i]== 'u')
		{
			count = count + 1;
		}
	}
	cout << "Number of vowel : " << count ;
}
