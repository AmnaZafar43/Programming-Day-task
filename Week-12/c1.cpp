#include <iostream>
#include <fstream>
using namespace std;
void header();                                                                                               
void menu();
int menu2();
  main()
{
    
    header();
    menu();
    int opt;
    string data;
    while(opt!=6)
    {
      opt=menu2();
      if(opt==1)
      {
        // Load data
	fstream f;
        f.open("aeroplane.txt",ios::in);
        while(!f.eof())
        {
          getline(f,data);
          cout <<data;
        }
       }
        if(opt==2)
        {
          int op;
          cout <<"1-First Class " <<endl;
          cout <<"2-Buisness Class " <<endl;
          cout <<"3-Economy Class " <<endl;
          cout <<"Enter your option ";
          cin >> op;
          if(op==1)
          {
          f<<"Row1"<<"\t" <<"*"<<"\t" <<"*"<<"\t" <<"X"<<"\t" <<"X" <<"\t" <<"X" <<"\t" <<"X"<<endl; 
          f<<"Row2"<<"\t" <<"*"<<"\t" <<"X"<<"\t" <<"*"<<"\t" <<"X" <<"\t" <<"*" <<"\t" <<"X" <<endl;   
        }
        f.close();
      }
    }
}
  void header()
{
   cout <<".............................."<<endl;
   cout <<"Flight Management System" <<endl;
   cout <<".............................."<<endl;
}
  void menu()
{
    fstream f;
   f.open("aeroplane.txt",ios::out);
   f <<"Rows"<<"\t" <<"A" <<"\t"<<"B"<<"\t" <<"C" <<"\t" <<"D" <<"\t" <<"E"<<"\t" <<"F" <<endl;
   f <<"Row1"<<"\t" <<"*"<<"\t" <<"*"<<"\t" <<"X"<<"\t" <<"X" <<"\t" <<"X" <<"\t" <<"X"<<endl; 
   f <<"Row2"<<"\t" <<"*"<<"\t" <<"X"<<"\t" <<"*"<<"\t" <<"X" <<"\t" <<"*" <<"\t" <<"X" <<endl; 
   f <<"Row3"<<"\t" <<"*"<<"\t" <<"*"<<"\t" <<"X"<<"\t" <<"X" <<"\t" <<"*" <<"\t" <<"X" <<endl; 
   f <<"Row4"<<"\t" <<"X"<<"\t" <<"*"<<"\t" <<"X"<<"\t" <<"*" <<"\t" <<"X" <<"\t" <<"X" <<endl; 
   f <<"Row5"<<"\t" <<"*"<<"\t" <<"X"<<"\t" <<"*"<<"\t" <<"X" <<"\t" <<"*" <<"\t" <<"*" <<endl; 
   f <<"Row6"<<"\t" <<"*"<<"\t" <<"X"<<"\t" <<"*"<<"\t" <<"*" <<"\t" <<"*" <<"\t" <<"X" <<endl; 
   f <<"Row7"<<"\t" <<"X"<<"\t" <<"*"<<"\t" <<"*"<<"\t" <<"*" <<"\t" <<"X" <<"\t" <<"X" <<endl; 
   f <<"Row8"<<"\t" <<"*"<<"\t" <<"X"<<"\t" <<"*"<<"\t" <<"X" <<"\t" <<"X" <<"\t" <<"*" <<endl; 
   f <<"Row9"<<"\t" <<"X"<<"\t" <<"*"<<"\t" <<"X"<<"\t" <<"X" <<"\t" <<"*" <<"\t" <<"X" <<endl; 
   f<<"Row10"<<"\t" <<"*"<<"\t" <<"X"<<"\t" <<"*"<<"\t" <<"X" <<"\t" <<"X" <<"\t" <<"X" <<endl; 
   f<<"Row11"<<"\t" <<"*"<<"\t" <<"*"<<"\t" <<"X"<<"\t" <<"*" <<"\t" <<"X" <<"\t" <<"*" <<endl; 
   f<<"Row12"<<"\t" <<"*"<<"\t" <<"*"<<"\t" <<"X"<<"\t" <<"X" <<"\t" <<"*" <<"\t" <<"X" <<endl; 
   f<<"Row13"<<"\t" <<"*"<<"\t" <<"*"<<"\t" <<"*"<<"\t" <<"*" <<"\t" <<"X" <<"\t" <<"*" <<endl; 
   f.close();	
}
 int menu2()
{
  int option;
  cout <<"1-Load the reserved seats arrangement from the file " <<endl;
  cout <<"2-Ask for ticket type " <<endl;
  cout <<"3-Print the reserved seates " <<endl;
  cout <<"4-Store the reserved seates arrangement " <<endl;
  cout <<"5-New Plane seat management " <<endl;
  cout <<"6-Exit " <<endl;
  cout <<"Enter your option ";
  cin >> option;
  return option;
}
  







