#include<iostream>
using namespace std ;

int main()
{
	int size = 10;
	int arr[size];
	for (int i=0 ; i<10;i++)
	{
		cout << "Enter Number : ";
		cin  >> arr[i];
	}
	for (int i=9 ; i>=0; i--)
	{
		cout << arr[i] <<" ";
	}
}
