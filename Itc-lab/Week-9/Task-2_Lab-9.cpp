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
	int small;
	small = arr[0];
	for (int j=0 ; j<10; j++)
	{
		if (arr[j]< small)
		{
			small = arr[j];
		}
	}
	cout <<"Smallest Number is : "<< small;
}
