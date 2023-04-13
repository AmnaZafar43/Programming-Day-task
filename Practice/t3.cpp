#include<iostream>
using namespace std;
main()
{
    for(int i=1;i<6;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<6;i++)
    {
        for(int j=5;j>=i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<6;i++)
    {
        for(int j=5;j>i;j--)
        {
            cout<<" ";
        }
        for(int k=0;k<=i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}