//-------- Libraries ------------
#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;
//--------------------------------

//-------- Prototypes -----------

struct roles
{
    string username;
    string password;
    string role;
};

string who(int size, string login,roles array[])
{
    //-------- Take user name and password and return the role ----------------
    string username, password;
    // SetConsoleTextAttribute(h, 7);
    cout << "\nEnter username ";
    cin >>   username;
    cout << "Enter password ";
    cin >>   password;
    for (int i = 0; i < size; i++)
    {
        if (array[i].username == username && array[i].password == password)
        {
            login = username;
            return array[i].role;
        }
    }
    login = " ";
    return "Invalid";
    // SetConsoleTextAttribute(h, 7);
}

void addData(string username, string password, string role, int count, int size,roles array[])
{
    //---------- Add data in arrays ------------
    if (count < size)
    {
        array[count].username = username;
        array[count].password = password;
        array[count].role = role;
        count++;
    }
    else
    {
        cout << "Sorry!no space";
    }
}

void clear_screen()
{
    //------------ To clear screen --------------
    cout << "Press any key to continue " << endl;
    getch();
    system("CLS");
}

void header()
//-----------Header of System-------------
{

    // SetConsoleTextAttribute(h, 9);
    cout << "\t\t ____         ____  ____           ____   ________________ " << endl;
    cout << "\t\t |  |         |  |  |  | |        ||  |   |                " << endl;
    cout << "\t\t |  |         |  |  |  |  |      | |  |   |                " << endl;
    cout << "\t\t |  |         |  |  |  |   |    |  |  |   |                " << endl;
    cout << "\t\t |  |_________|  |  |  |    |  |   |  |   |                " << endl;
    cout << "\t\t |               |  |  |     |     |  |   |_______________ " << endl;
    cout << "\t\t |   _________   |  |  |           |  |                  | " << endl;
    cout << "\t\t |  |         |  |  |  |           |  |                  | " << endl;
    cout << "\t\t |  |         |  |  |  |           |  |                  | " << endl;
    cout << "\t\t |  |         |  |  |  |           |  |                  | " << endl;
    cout << "\t\t |__|         |__|  |__|           |__|   _______________| " << endl;
    // SetConsoleTextAttribute(h, 9);
}

void hms_header()
{
    //--------------Sub_header---------------
    // SetConsoleTextAttribute(h, 3);
    cout << "\n\n\n";
    cout << "\t\t\t*****************************************************" << endl;
    cout << "\t\t\t********                                     ********" << endl;
    cout << "\t\t\t          Service Hospital Management System         " << endl;
    cout << "\t\t\t********                                     ********" << endl;
    cout << "\t\t\t*****************************************************" << endl;
    // SetConsoleTextAttribute(h, 3);
}

int menu()
{
    //-----------Menu-------------
    int option;
    // SetConsoleTextAttribute(h, 10);
    cout << "\n";
    cout << "\t ____________________________________________________ " << endl;
    cout << "\t|                                                    | " << endl;
    cout << "\t|                  1- Admin                          |" << endl;
    cout << "\t|                  2- Doctor                         |" << endl;
    cout << "\t|                  3- Patient                        |" << endl;
    cout << "\t|                  4- Instructions                   |" << endl;
    cout << "\t|                  5- Exit                           |" << endl;
    cout << "\t|____________________________________________________|" << endl;
    // SetConsoleTextAttribute(h, 10);
    cout << "Enter your option ";
    cin >> option;
    return option;
}

void main_options()
{
    //----------Option for modules in which you want to go-------------------
    int option;
    cout << "Enter your option ";
    cin >> option;
}

string Admin_menu()
{
    //-----------------Admin options----------------------
    header();
    cout << endl;
    string option;
    // SetConsoleTextAttribute(h, 4);
    cout << "\t\t _________________" << endl;
    cout << "\t\t|                 |" << endl;
    cout << "\t\t|     ADMIN       |" << endl;
    cout << "\t\t|_________________|" << endl;
    cout << "\n\n";
    cout << "\t\t      1- Add Doctors..." << endl;
    cout << "\t\t      2- View Doctors..." << endl;
    cout << "\t\t      3- Delete Doctors..." << endl;
    cout << "\t\t      4- Update Doctors..." << endl;
    cout << "\t\t      5- View Patient..." << endl;
    cout << "\t\t      6- Delete Patient..." << endl;
    cout << "\t\t      7- View Available Test Details..." << endl;
    cout << "\t\t      8- View Appointments..." << endl;
    cout << "\t\t      9- View Instructions..." << endl;
    cout << "\t\t     10- Logout..." << endl;
    cout << "\n";
    cout << "\t\t_____________________________________________" << endl;
    // SetConsoleTextAttribute(h, 4);
    cout << endl;
    // SetConsoleTextAttribute(h, 7);
    cout << "\nEnter your option ";
    cin >> option;
    // SetConsoleTextAttribute(h, 7);
    return option;
}

string Doctor_menu()
{
    //---------------------Doctor options-------------------------
    header();
    cout << endl;
    string option;
    // SetConsoleTextAttribute(h, 4);
    cout << "\t\t _________________" << endl;
    cout << "\t\t|                 |" << endl;
    cout << "\t\t|     DOCTOR      |" << endl;
    cout << "\t\t|_________________|" << endl;
    cout << "\n\n";
    cout << "\t\t1- Add Patient..." << endl;
    cout << "\t\t2- View Patients..." << endl;
    cout << "\t\t3- Delete Patients..." << endl;
    cout << "\t\t4- Search Patient By Name..." << endl;
    cout << "\t\t5- Give prescription..." << endl;
    cout << "\t\t6- View Apointments..." << endl;
    cout << "\t\t7- Laboratory Test..." << endl;
    cout << "\t\t8- View Instructions..." << endl;
    cout << "\t\t9- Logout..." << endl;
    cout << "\n";
    cout << "\t\t_____________________________________________" << endl;
    // SetConsoleTextAttribute(h, 4);
    cout << endl;
    // SetConsoleTextAttribute(h, 7);
    cout << "\nEnter your option ";
    cin >> option;
    // SetConsoleTextAttribute(h, 7);
    return option;
}

string Patient_menu()
{
    //-----------------Patient menu--------------------
    header();
    cout << "\n";
    string option;
    // SetConsoleTextAttribute(h, 4);
    cout << "\t\t _________________" << endl;
    cout << "\t\t|                 |" << endl;
    cout << "\t\t|     PATIENT     |" << endl;
    cout << "\t\t|_________________|" << endl;
    cout << "\n\n";
    cout << "\t\t1- Book Appointments..." << endl;
    cout << "\t\t2- View Apointments..." << endl;
    cout << "\t\t3- View Doctors..." << endl;
    cout << "\t\t4- View his/her Record..." << endl;
    cout << "\t\t5- View Prescriptions..." << endl;
    cout << "\t\t6- Logout..." << endl;
    cout << "\n";
    cout << "\t\t_____________________________________________" << endl;
    // SetConsoleTextAttribute(h, 4);
    cout << endl;
    // SetConsoleTextAttribute(h, 7);
    cout << "\n Enter your option ";
    cin >> option;
    // SetConsoleTextAttribute(h, 7);
    return option;
}
struct doctor
{
    string doc_name;
    string doc_gender;
    int doc_age;
    string doc_spec;
    string doc_blood;
    string doc_id;
    string doc_mob;
    string doc_add;
    string doc_mail;
};

void add_doctors(int doc, doctor arr[])
{
    //----------------Add a doctor---------------------
    fstream file;
    string blood, mobile;
    // SetConsoleTextAttribute(h, 7);
    cout << "\n\n\n";
    file.open("doctor.txt", ios::out);
    cout << "Enter doctor name... ";
    cin >> arr[doc].doc_name;
    cout << "Enter doctor gender... ";
    cin >> arr[doc].doc_gender;
    cout << "Enter doctor age... ";
    cin >> arr[doc].doc_age;
    cout << "Enter specialization... ";
    cin >> arr[doc].doc_spec;
    while (true)
    {
        cout << "Enter blood group... ";
        cin >> blood;
        if (blood.length() == 1 || blood.length() == 2 || blood.length() == 3)
        {
            arr[doc].doc_blood = blood;
            break;
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }
    cout << "Enter doctor's ID... ";
    cin >> arr[doc].doc_id;
    while (true)
    {

        cout << "Enter mobile no... ";
        cin >> mobile;
        if (mobile.length() == 11)
        {
            arr[doc].doc_mob = mobile;
            break;
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }
    cout << "Enter doctor address... ";
    cin >> arr[doc].doc_add;
    cout << "Enter Doctor's e-mail... ";
    cin >> arr[doc].doc_mail;
    if (doc != 0)
    {
        file << endl;
    }
    file << arr[doc].doc_name << "," << arr[doc].doc_gender << "," << arr[doc].doc_age << "," << arr[doc].doc_spec << "," << arr[doc].doc_blood << "," << arr[doc].doc_id << "," << arr[doc].doc_mob << "," << arr[doc].doc_add << "," << arr[doc].doc_mail;
    file.close();
    cout << "\n\n";
    // SetConsoleTextAttribute(h, 7);
    doc++;
}

void view_doctors(int doc, doctor arr[])
{
    //----------------View all doctors------------------
    cout << doc;
    int salary = 0;
    srand(time(0));
    // SetConsoleTextAttribute(h, 4);
    cout << endl;
    cout << "\n\n\n\n";
    cout << "\t\t _________________" << endl;
    cout << "\t\t|                 |" << endl;
    cout << "\t\t|  VIEW DOCTORS   |" << endl;
    cout << "\t\t|_________________|" << endl;
    cout << "\n\n\n";
    // SetConsoleTextAttribute(h, 4);
    //(h, 9);
    cout << "*************************************************************************************************************************" << endl;
    // SetConsoleTextAttribute(h, 9);
    // SetConsoleTextAttribute(h, 4);
    cout << "\tDoctor Name\tDoctor ID\tGender\t\tAge\tSpecialization\tBlood_Group\tMobile-No\tAddress\t\tEmail" << endl;
    cout << "_________________________________________________________________________________________________________________________" << endl;
    // SetConsoleTextAttribute(color, 4);
    // SetConsoleTextAttribute(h, 8);
    for (int i = 0; i < doc; i++)
    {
        salary = salary + rand();
        salary = salary * 3;
        // SetConsoleTextAttribute(h, 7);
        if (arr[i].doc_id != " ")
        {

            cout << "\t" << arr[i].doc_name << "\t\t" << arr[i].doc_id << "\t\t" << arr[i].doc_gender << "\t"
                 << " " << arr[i].doc_age << "\t"
                 << " " << arr[i].doc_spec << "\t"
                 << " " << arr[i].doc_blood << "\t"
                 << " " << arr[i].doc_mob << "\t"
                 << " " << arr[i].doc_add << "\t"
                 << " " << arr[i].doc_mail << endl;
        }
        // SetConsoleTextAttribute(h, 7);
    }
    // SetConsoleTextAttribute(h, 9);
    cout << "*************************************************************************************************************************" << endl;
    // SetConsoleTextAttribute(h, 9);
}

void delete_doctors(int doc, doctor arr[])
{
    //---------------Delete doctor------------------
    string status, id;
    int i;
    cout << "\n\n\n";
    cout << "     Press y for Continue to delete and n to go back :    ";
    cin >> status;
    if (status == "y" || status == "Y")
    {
        cout << "Enter doctor id ";
        cin >> id;
        for (i = 0; i < doc; i++)
        {
            if (id == arr[i].doc_id)
            {
                if (i != doc - 1)
                {
                    for (int j = i; j < (doc); j++)
                    {
                        arr[j].doc_name = arr[j + 1].doc_name;
                        arr[j].doc_age = arr[j + 1].doc_age;
                        arr[j].doc_blood = arr[j + 1].doc_blood;
                        arr[j].doc_spec = arr[j + 1].doc_spec;
                        arr[j].doc_mob = arr[j + 1].doc_mob;
                        arr[j].doc_blood = arr[j + 1].doc_blood;
                        arr[j].doc_gender = arr[j + 1].doc_gender;
                        arr[j].doc_mail = arr[j + 1].doc_mail;
                        arr[j].doc_add = arr[j + 1].doc_add;
                        arr[j].doc_id = arr[j + 1].doc_id;
                    }
                }
                else
                {
                }
                doc--;
            }
        }
    }
}

void update_doctors(int doc, doctor arr[])
{
    //------------------Update record----------------------------
    int idx, i;
    string change, id;
    // SetConsoleTextAttribute(h, 7);
    cout << "\n\n\n\n";
    cout << "\tEnter doctor's ID ";
    cin >> id;
    cout << "\tEnter which thing you want to change ";
    cin >> change;
    // SetConsoleTextAttribute(h, 7);
    for (i = 0; i < doc; i++)
    {
        if (id == arr[i].doc_id)
        {
            idx = i;
            if (change == "name" || change == "Name" || change == "NAME")
            {
                // SetConsoleTextAttribute(h, 7);
                cout << "\tEnter doctor name... ";
                cin >> arr[idx].doc_name;
                // SetConsoleTextAttribute(h, 7);
                cout << "\n\n";
                // SetConsoleTextAttribute(h, 4);
                cout << "\t\t _________________" << endl;
                cout << "\t\t|                 |" << endl;
                cout << "\t\t|  UPDATE DOCTORS |" << endl;
                cout << "\t\t|_________________|" << endl;
                // SetConsoleTextAttribute(h, 4);
                cout << "\n\n";
                // SetConsoleTextAttribute(h, 9);
                cout << "*************************************************************************************************************************" << endl;
                // SetConsoleTextAttribute(h, 9);
                // SetConsoleTextAttribute(h, 4);
                cout << "\tDoctor Name\tDoctor ID\tGender\tAge\tSpecialization\tBlood_Group\tMobile-No\tAddress\tEmail" << endl;
                cout << "_________________________________________________________________________________________________________" << endl;
                // SetConsoleTextAttribute(h, 4);
                // SetConsoleTextAttribute(h, 7);
                cout << "\t" << arr[idx].doc_name << "\t" << arr[i].doc_id << "\t" << arr[i].doc_gender << "\t" << arr[i].doc_age << "\t" << arr[i].doc_spec << "\t" << arr[i].doc_blood << "\t" << arr[i].doc_mob << "\t" << arr[i].doc_add << "\t" << arr[i].doc_mail << endl;
                // SetConsoleTextAttribute(h, 7);
                // SetConsoleTextAttribute(h, 9);
                cout << "*************************************************************************************************************************" << endl;
                // SetConsoleTextAttribute(h, 9);
            }
            else if (change == "id" || change == "Id" || change == "ID")
            {
                cout << "\tEnter doctor ID... ";
                cin >> arr[idx].doc_id;
                cout << "\n\n";
                cout << "\t\t _________________" << endl;
                cout << "\t\t|                 |" << endl;
                cout << "\t\t|  UPDATE DOCTORS |" << endl;
                cout << "\t\t|_________________|" << endl;
                cout << "*************************************************************************************************************************" << endl;
                cout << "\tDoctor Name\tDoctor ID\tGender\tAge\tSpecialization\tBlood_Group\tMobile-No\tAddress\tEmail" << endl;
                cout << "\t" << arr[i].doc_name << "\t" << arr[idx].doc_id << "\t" << arr[i].doc_gender << "\t" << arr[i].doc_age << "\t" << arr[i].doc_spec << "\t" << arr[i].doc_blood << "\t" << arr[i].doc_mob << "\t" << arr[i].doc_add << "\t" << arr[i].doc_mail << endl;
                cout << "*************************************************************************************************************************" << endl;
            }
            else if (change == "gender" || change == "Gender" || change == "GENDER")
            {
                cout << "\tEnter doctor gender... ";
                cin >> arr[idx].doc_gender;
                cout << "\n\n";
                cout << "\t\t _________________" << endl;
                cout << "\t\t|                 |" << endl;
                cout << "\t\t|  UPDATE DOCTORS |" << endl;
                cout << "\t\t|_________________|" << endl;
                cout << "*************************************************************************************************************************" << endl;
                cout << "\tDoctor Name\tDoctor ID\tGender\tAge\tSpecialization\tBlood_Group\tMobile-No\tAddress\tEmail" << endl;
                cout << "\t" << arr[i].doc_name << "\t" << arr[i].doc_id << "\t" << arr[idx].doc_gender << "\t" << arr[i].doc_age << "\t" << arr[i].doc_spec << "\t" << arr[i].doc_blood << "\t" << arr[i].doc_mob << "\t" << arr[i].doc_add << "\t" << arr[i].doc_mail << endl;
                cout << "*************************************************************************************************************************" << endl;
            }
            else if (change == "age" || change == "AGE" || change == "Age")
            {
                cout << "\tEnter doctor age... ";
                cin >> arr[idx].doc_age;
                cout << "\n\n";
                cout << "\t\t _________________" << endl;
                cout << "\t\t|                 |" << endl;
                cout << "\t\t|  UPDATE DOCTORS |" << endl;
                cout << "\t\t|_________________|" << endl;
                cout << "*************************************************************************************************************************" << endl;
                cout << "\tDoctor Name\tDoctor ID\tGender\tAge\tSpecialization\tBlood_Group\tMobile-No\tAddress\tEmail" << endl;
                cout << "\t" << arr[i].doc_name << "\t" << arr[i].doc_id << "\t" << arr[i].doc_gender << "\t" << arr[idx].doc_age << "\t" << arr[i].doc_spec << "\t" << arr[i].doc_blood << "\t" << arr[i].doc_mob << "\t" << arr[i].doc_add << "\t" << arr[i].doc_mail << endl;
                cout << "*************************************************************************************************************************" << endl;
            }
            else if (change == "specialization" || change == "Spec" || change == "spec" || change == "Specialization")
            {
                cout << "\tEnter doctor specialization... ";
                cin >> arr[idx].doc_spec;
                cout << "\n\n";
                cout << "\t\t _________________" << endl;
                cout << "\t\t|                 |" << endl;
                cout << "\t\t|  UPDATE DOCTORS |" << endl;
                cout << "\t\t|_________________|" << endl;
                cout << "*************************************************************************************************************************" << endl;
                cout << "\tDoctor Name\tDoctor ID\tGender\tAge\tSpecialization\tBlood_Group\tMobile-No\tAddress\tEmail" << endl;
                cout << "\t" << arr[i].doc_name << "\t" << arr[i].doc_id << "\t" << arr[i].doc_gender << "\t" << arr[i].doc_age << "\t" << arr[idx].doc_spec << "\t" << arr[i].doc_blood << "\t" << arr[i].doc_mob << "\t" << arr[i].doc_add << "\t" << arr[i].doc_mail << endl;
                cout << "*************************************************************************************************************************" << endl;
            }
            else if (change == "blood" || change == "Blood" || change == "BLOOD")
            {
                cout << "\tEnter doctor blood group... ";
                cin >> arr[idx].doc_blood;
                cout << "\n\n";
                cout << "\t\t _________________" << endl;
                cout << "\t\t|                 |" << endl;
                cout << "\t\t|  UPDATE DOCTORS |" << endl;
                cout << "\t\t|_________________|" << endl;
                cout << "*************************************************************************************************************************" << endl;
                cout << "\tDoctor Name\tDoctor ID\tGender\tAge\tSpecialization\tBlood_Group\tMobile-No\tAddress\tEmail" << endl;
                cout << "\t" << arr[i].doc_name << "\t" << arr[i].doc_id << "\t" << arr[i].doc_gender << "\t" << arr[i].doc_age << "\t" << arr[i].doc_spec << "\t" << arr[idx].doc_blood << "\t" << arr[i].doc_mob << "\t" << arr[i].doc_add << "\t" << arr[i].doc_mail << endl;
                cout << "*************************************************************************************************************************" << endl;
            }
            else if (change == "mobile" || change == "Mobile" || change == "MOBILE")
            {
                cout << "\tEnter doctor mobile no... ";
                cin >> arr[idx].doc_mob;
                cout << "\n\n";
                cout << "\t\t _________________" << endl;
                cout << "\t\t|                 |" << endl;
                cout << "\t\t|  UPDATE DOCTORS |" << endl;
                cout << "\t\t|_________________|" << endl;
                cout << "*************************************************************************************************************************" << endl;
                cout << "\tDoctor Name\tDoctor ID\tGender\tAge\tSpecialization\tBlood_Group\tMobile-No\tAddress\tEmail" << endl;
                cout << "\t" << arr[i].doc_name << "\t" << arr[i].doc_id << "\t" << arr[i].doc_gender << "\t" << arr[i].doc_age << "\t" << arr[i].doc_spec << "\t" << arr[i].doc_blood << "\t" << arr[idx].doc_mob << "\t" << arr[i].doc_add << "\t" << arr[i].doc_mail << endl;
                cout << "*************************************************************************************************************************" << endl;
            }
            else if (change == "address" || change == "Address" || change == "ADDRESS")
            {
                cout << "\tEnter doctor address... ";
                cin >> arr[idx].doc_add;
                cout << "\n\n";
                cout << "\t\t _________________" << endl;
                cout << "\t\t|                 |" << endl;
                cout << "\t\t|  UPDATE DOCTORS |" << endl;
                cout << "\t\t|_________________|" << endl;
                cout << "*************************************************************************************************************************" << endl;
                cout << "\tDoctor Name\tDoctor ID\tGender\tAge\tSpecialization\tBlood_Group\tMobile-No\tAddress\tEmail" << endl;
                cout << "\t" << arr[i].doc_name << "\t" << arr[i].doc_id << "\t" << arr[i].doc_gender << "\t" << arr[i].doc_age << "\t" << arr[i].doc_spec << "\t" << arr[i].doc_blood << "\t" << arr[i].doc_mob << "\t" << arr[idx].doc_add << "\t" << arr[i].doc_mail << endl;
                cout << "*************************************************************************************************************************" << endl;
            }
            else if (change == "email" || change == "mail" || change == "e_mail" || change == "Email")
            {
                cout << "\tEnter doctor email... ";
                cin >> arr[idx].doc_mail;
                cout << "\n\n";
                cout << "\t\t _________________" << endl;
                cout << "\t\t|                 |" << endl;
                cout << "\t\t|  UPDATE DOCTORS |" << endl;
                cout << "\t\t|_________________|" << endl;
                cout << "*************************************************************************************************************************" << endl;
                cout << "\tDoctor Name\tDoctor ID\tGender\tAge\tSpecialization\tBlood_Group\tMobile-No\tAddress\tEmail" << endl;
                cout << "\t" << arr[i].doc_name << "\t" << arr[i].doc_id << "\t" << arr[i].doc_gender << "\t" << arr[i].doc_age << "\t" << arr[i].doc_spec << "\t" << arr[i].doc_blood << "\t" << arr[i].doc_mob << "\t" << arr[i].doc_add << "\t" << arr[idx].doc_mail << endl;
                cout << "*************************************************************************************************************************" << endl;
            }
            else
            {
                cout << "Enter valid thing for change " << endl;
            }
        }
        // SetConsoleTextAttribute(h, 8);
    }
}

struct patient
{
    string p_name;
    int p_age;
    string p_blood;
    string p_disease;
    string p_cnic;
    string p_mob;
    string p_add;
    string p_gender;
    string p_id;
};

void add_patients(int pat, patient p_arr[])
{
    //--------------------------Add patient--------------------------
    fstream file;
    string option;
    string blood, cnic, mobile;
    // SetConsoleTextAttribute(h, 7);
    cout << "\n\n\n";
    file.open("patient.txt", ios::out);
    cout << "Enter patient name... ";
    cin >> p_arr[pat].p_name;
    cout << "Enter patient age... ";
    cin >> p_arr[pat].p_age;
    cout << "Enter patient disease... ";
    cin >> p_arr[pat].p_disease;
    while (true)
    {
        cout << "Enter blood group... ";
        cin >> blood;
        if (blood.length() == 1 || blood.length() == 2 || blood.length() == 3)
        {
            p_arr[pat].p_blood = blood;
            break;
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }
    while (true)
    {
        cout << "Enter cnic number";
        cin >> cnic;
        if (cnic.length() == 13)
        {
            p_arr[pat].p_cnic = cnic;
            break;
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }
    cout << "Enter patient id...";
    cin >> p_arr[pat].p_id;
    cout << "Enter patient gender... ";
    cin >> p_arr[pat].p_gender;
    while (true)
    {
        cout << "Enter mobile no";
        cin >> mobile;
        if (mobile.length() == 11)
        {
            p_arr[pat].p_mob = mobile;
            break;
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }
    cout << "Enter patient address... ";
    cin >> p_arr[pat].p_add;
    cout << "Did doctor recommend you any test... ";
    cin >> option;
    if (pat != 0)
    {
        file << endl;
    }

    file << p_arr[pat].p_name << "," << p_arr[pat].p_age << "," << p_arr[pat].p_disease << "," << p_arr[pat].p_blood << "," << p_arr[pat].p_cnic << "," << p_arr[pat].p_id << "," << p_arr[pat].p_gender << "," << p_arr[pat].p_mob << "," << p_arr[pat].p_add;
    file.close();
    cout << "\n\n";
    // SetConsoleTextAttribute(h, 7);
    pat++;
}

void view_patients(int pat, patient p_arr[])
{
    //--------------------View all patients---------------------------
    cout << "\n\n\n\n";
    // SetConsoleTextAttribute(h, 4);
    cout << "\t\t _________________" << endl;
    cout << "\t\t|                 |" << endl;
    cout << "\t\t|  VIEW PATIENTS  |" << endl;
    cout << "\t\t|_________________|" << endl;
    // SetConsoleTextAttribute(h, 4);
    cout << "\n\n\n";
    // SetConsoleTextAttribute(h, 9);
    cout << "*************************************************************************************************************************" << endl;
    // SetConsoleTextAttribute(h, 9);
    // SetConsoleTextAttribute(h, 4);
    cout << "\tPatient Name\tID\tAge\tDisease\t\tGender\tBlood_Group\tCNIC\tMobile-No\tAddress" << endl;
    cout << "___________________________________________________________________________________________________________________________" << endl;
    // SetConsoleTextAttribute(h, 4);
    for (int i = 0; i < pat; i++)
    {
        if (p_arr[i].p_id != " ")
        {
            // SetConsoleTextAttribute(h, 7);
            cout << "\t" << p_arr[i].p_name << "\t" << p_arr[i].p_id << "\t" << p_arr[i].p_age << "\t" << p_arr[i].p_disease << "\t" << p_arr[i].p_gender << "\t" << p_arr[i].p_blood << "\t" << p_arr[i].p_cnic << "\t" << p_arr[i].p_mob << "\t" << p_arr[i].p_add << endl;
            // SetConsoleTextAttribute(h, 7);
        }
    }
    // SetConsoleTextAttribute(h, 9);
    cout << "*************************************************************************************************************************" << endl;
    // SetConsoleTextAttribute(h, 9);
}

void update_patients(int pat, patient p_arr[])
{
    //--------------------------Update patient--------------------
    int idx, i;
    string change;
    string id;
    // SetConsoleTextAttribute(h, 8);
    cout << "Enter patient's ID ";
    cin >> id;
    cout << "Enter which thing you want to change ";
    cin >> change;

    for (i = 0; i < pat; i++)
    {
        if (id == p_arr[i].p_id)
        {
            idx = i;
            if (change == "name" || change == "Name" || change == "NAME")
            {
                cout << "Enter patient name... ";
                cin >> p_arr[idx].p_name;
                cout << "\n\n\n\n";
                cout << "\t\t _________________" << endl;
                cout << "\t\t|                 |" << endl;
                cout << "\t\t|  UPDATE PATIENT |" << endl;
                cout << "\t\t|_________________|" << endl;
                cout << "\n\n\n";
                cout << "*************************************************************************************************************************" << endl;
                cout << "\tPatient Name\tID\tAge\tDisease\tGender\tBlood_Group\tCNIC\tMobile-No\tAddress" << endl;
                cout << "\t" << p_arr[idx].p_name << "\t" << p_arr[i].p_id << "\t" << p_arr[i].p_age << "\t" << p_arr[i].p_disease << "\t" << p_arr[i].p_gender << "\t" << p_arr[i].p_blood << "\t" << p_arr[i].p_cnic << "\t" << p_arr[i].p_mob << "\t" << p_arr[i].p_add << endl;
                cout << "*************************************************************************************************************************" << endl;
            }
            else if (change == "id" || change == "Id" || change == "ID")
            {
                cout << "Enter patient ID... ";
                cin >> p_arr[idx].p_id;
                cout << "\n\n\n\n";
                cout << "\t\t _________________";
                cout << "\t\t|                 |" << endl;
                cout << "\t\t|  UPDATE PATIENT |" << endl;
                cout << "\t\t|_________________|" << endl;
                cout << "\n\n\n";
                cout << "*************************************************************************************************************************" << endl;
                cout << "\tPatient Name\tID\tAge\tDisease\tGender\tBlood_Group\tCNIC\tMobile-No\tAddress" << endl;
                cout << "\t" << p_arr[i].p_name << "\t" << p_arr[idx].p_id << "\t" << p_arr[i].p_age << "\t" << p_arr[i].p_disease << "\t" << p_arr[i].p_gender << "\t" << p_arr[i].p_blood << "\t" << p_arr[i].p_cnic << "\t" << p_arr[i].p_mob << "\t" << p_arr[i].p_add << endl;
                cout << "*************************************************************************************************************************" << endl;
            }
            else if (change == "gender" || change == "Gender" || change == "GENDER")
            {
                cout << "Enter doctor gender... ";
                cin >> p_arr[idx].p_gender;
                cout << "\n\n\n\n";
                cout << "\t\t _________________" << endl;
                cout << "\t\t|                 |" << endl;
                cout << "\t\t|  UPDATE PATIENT |" << endl;
                cout << "\t\t|_________________|" << endl;
                cout << "\n\n\n";
                cout << "*************************************************************************************************************************" << endl;
                cout << "\tPatient Name\tID\tAge\tDisease\tGender\tBlood_Group\tCNIC\tMobile-No\tAddress" << endl;
                cout << "\t" << p_arr[i].p_name << "\t" << p_arr[i].p_id << "\t" << p_arr[i].p_age << "\t" << p_arr[i].p_disease << "\t" << p_arr[idx].p_gender << "\t" << p_arr[i].p_blood << "\t" << p_arr[i].p_cnic << "\t" << p_arr[i].p_mob << "\t" << p_arr[i].p_add << endl;
                cout << "*************************************************************************************************************************" << endl;
            }
            else if (change == "age" || change == "AGE" || change == "Age")
            {
                cout << "Enter doctor age... ";
                cin >> p_arr[idx].p_age;
                cout << "\n\n\n\n";
                cout << "\t\t _________________" << endl;
                cout << "\t\t|                 |" << endl;
                cout << "\t\t|  UPDATE PATIENT |" << endl;
                cout << "\t\t|_________________|" << endl;
                cout << "\n\n\n";
                cout << "*************************************************************************************************************************" << endl;
                cout << "\tPatient Name\tID\tAge\tDisease\tGender\tBlood_Group\tCNIC\tMobile-No\tAddress" << endl;
                cout << "\t" << p_arr[i].p_name << "\t" << p_arr[i].p_id << "\t" << p_arr[idx].p_age << "\t" << p_arr[i].p_disease << "\t" << p_arr[i].p_gender << "\t" << p_arr[i].p_blood << "\t" << p_arr[i].p_cnic << "\t" << p_arr[i].p_mob << "\t" << p_arr[i].p_add << endl;
            }
            else if (change == "disease" || change == "Disease" || change == "DISEASE" || change == "dis" || change == "Dis")
            {
                cout << "Enter Patient disaese... ";
                cin >> p_arr[idx].p_disease;
                cout << "\n\n\n\n";
                cout << "\t\t _________________" << endl;
                cout << "\t\t|                 |" << endl;
                cout << "\t\t|  UPDATE PATIENT |" << endl;
                cout << "\t\t|_________________|" << endl;
                cout << "\n\n\n";
                cout << "*************************************************************************************************************************" << endl;
                cout << "\tPatient Name\tID\tAge\tDisease\tGender\tBlood_Group\tCNIC\tMobile-No\tAddress" << endl;
                cout << "\t" << p_arr[i].p_name << "\t" << p_arr[i].p_id << "\t" << p_arr[i].p_age << "\t" << p_arr[idx].p_disease << "\t" << p_arr[i].p_gender << "\t" << p_arr[i].p_blood << "\t" << p_arr[i].p_cnic << "\t" << p_arr[i].p_mob << "\t" << p_arr[i].p_add << endl;
                cout << "*************************************************************************************************************************" << endl;
            }
            else if (change == "blood" || change == "Blood" || change == "BLOOD")
            {
                cout << "Enter patient blood group... ";
                cin >> p_arr[idx].p_blood;
                cout << "\n\n\n\n";
                cout << "\t\t _________________" << endl;
                cout << "\t\t|                 |" << endl;
                cout << "\t\t|  UPDATE PATIENT |" << endl;
                cout << "\t\t|_________________|" << endl;
                cout << "\n\n\n";
                cout << "*************************************************************************************************************************" << endl;
                cout << "\tPatient Name\tID\tAge\tDisease\tGender\tBlood_Group\tCNIC\tMobile-No\tAddress" << endl;
                cout << "\t" << p_arr[i].p_name << "\t" << p_arr[i].p_id << "\t" << p_arr[i].p_age << "\t" << p_arr[i].p_disease << "\t" << p_arr[i].p_gender << "\t" << p_arr[idx].p_blood << "\t" << p_arr[i].p_cnic << "\t" << p_arr[i].p_mob << "\t" << p_arr[i].p_add << endl;
                cout << "*************************************************************************************************************************" << endl;
            }
            else if (change == "mobile" || change == "Mobile" || change == "MOBILE")
            {
                cout << "Enter patient mobile no... ";
                cin >> p_arr[idx].p_mob;
                cout << "\n\n\n\n";
                cout << "\t\t _________________" << endl;
                cout << "\t\t|                 |" << endl;
                cout << "\t\t|  UPDATE PATIENT |" << endl;
                cout << "\t\t|_________________|" << endl;
                cout << "\n\n\n";
                cout << "*************************************************************************************************************************" << endl;
                cout << "\tPatient Name\tID\tAge\tDisease\tGender\tBlood_Group\tCNIC\tMobile-No\tAddress" << endl;
                cout << "\t" << p_arr[i].p_name << "\t" << p_arr[i].p_id << "\t" << p_arr[i].p_age << "\t" << p_arr[i].p_disease << "\t" << p_arr[i].p_gender << "\t" << p_arr[i].p_blood << "\t" << p_arr[i].p_cnic << "\t" << p_arr[idx].p_mob << "\t" << p_arr[i].p_add << endl;
                cout << "*************************************************************************************************************************" << endl;
            }
            else if (change == "address" || change == "Address" || change == "ADDRESS" || change == "add")
            {
                cout << "Enter patient address... ";
                cin >> p_arr[idx].p_add;
                cout << "\n\n\n\n";
                cout << "\t\t _________________" << endl;
                cout << "\t\t|                 |" << endl;
                cout << "\t\t|  UPDATE PATIENT |" << endl;
                cout << "\t\t|_________________|" << endl;
                cout << "\n\n\n";
                cout << "*************************************************************************************************************************" << endl;
                cout << "\tPatient Name\tID\tAge\tDisease\tGender\tBlood_Group\tCNIC\tMobile-No\tAddress" << endl;
                cout << "\t" << p_arr[i].p_name << "\t" << p_arr[i].p_id << "\t" << p_arr[i].p_age << "\t" << p_arr[i].p_disease << "\t" << p_arr[i].p_gender << "\t" << p_arr[i].p_blood << "\t" << p_arr[i].p_cnic << "\t" << p_arr[i].p_mob << "\t" << p_arr[idx].p_add << endl;
                cout << "*************************************************************************************************************************" << endl;
            }
            else if (change == "cnic" || change == "CNIC" || change == "Cnic")
            {
                cout << "Enter patient cnic... ";
                cin >> p_arr[idx].p_cnic;
                cout << "\n\n\n\n";
                cout << "\t\t _________________" << endl;
                cout << "\t\t|                 |" << endl;
                cout << "\t\t|  UPDATE PATIENT |" << endl;
                cout << "\t\t|_________________|" << endl;
                cout << "\n\n\n";
                cout << "*************************************************************************************************************************" << endl;
                cout << "\tPatient Name\tID\tAge\tDisease\tGender\tBlood_Group\tCNIC\tMobile-No\tAddress" << endl;
                cout << "\t" << p_arr[i].p_name << "\t" << p_arr[i].p_id << "\t" << p_arr[i].p_age << "\t" << p_arr[i].p_disease << "\t" << p_arr[i].p_gender << "\t" << p_arr[i].p_blood << "\t" << p_arr[idx].p_cnic << "\t" << p_arr[i].p_mob << "\t" << p_arr[i].p_add << endl;
                cout << "*************************************************************************************************************************" << endl;
            }
            else
            {
                cout << "Enter valid thing for change " << endl;
            }
        }
        else
        {
            cout << "\t\n No,match found!!" << endl;
        }
    }
    // SetConsoleTextAttribute(h, 8);
}

void delete_patients(int pat, patient p_arr[])
{
    //-------------------Delete patient---------------------
    string status, id;
    int i;
    cout << "\n\n\n";
    cout << "     Press y for Continue to delete and n for bypass   :    ";
    cin >> status;
    if (status == "y")
    {
        cout << "Enter patient id ";
        cin >> id;
        for (i = 0; i < pat; i++)
        {
            if (id == p_arr[i].p_id)
            {
                if (i != pat - 1)
                {
                    for (int j = i; j < (pat); j++)
                    {
                        p_arr[j].p_name = p_arr[j + 1].p_name;
                        p_arr[j].p_age = p_arr[j + 1].p_age;
                        p_arr[j].p_blood = p_arr[j + 1].p_blood;
                        p_arr[j].p_disease = p_arr[j + 1].p_disease;
                        p_arr[j].p_mob = p_arr[j + 1].p_mob;
                        p_arr[j].p_cnic = p_arr[j + 1].p_cnic;
                        p_arr[j].p_gender = p_arr[j + 1].p_gender;
                        p_arr[j].p_add = p_arr[j + 1].p_add;
                        p_arr[j].p_id = p_arr[j + 1].p_id;
                    }
                }
                else
                {
                }
                pat--;
            }
        }
    }
}

void book_appointments(patient p_arr[], doctor arr[], int pat, int doc, int pat_no)
{
    //-----------------------Book appointments wih doctor---------------------
    // SetConsoleTextAttribute(h, 7);
    string name, disease, blood, cnic, doc_name;
    int age;
    cout << "\n\n";
    cout << "Enter patient name... ";
    cin >> name;
    cout << "Enter patient age... ";
    cin >> age;
    cout << "Enter patient disease... ";
    cin >> disease;
    cout << "Enter blood-group... ";
    cin >> blood;
    cout << "Enter your CNIC... ";
    cin >> cnic;
    cout << "\n";
    cout << "******** AVAILABLE DOCTORS *********" << endl;
    cout << "1- Dr.Cato " << endl;
    cout << "2- Dr.Sam " << endl;
    cout << "3- Dr.Hazel" << endl;
    cout << "\n";
    cout << "Enter doctor name for appointment... ";
    cin >> doc_name;
    if (pat_no <= 15)
    {
        p_arr[pat].p_name = name;
        p_arr[pat].p_age = age;
        p_arr[pat].p_disease = disease;
        p_arr[pat].p_blood = blood;
        p_arr[pat].p_cnic = cnic;
        arr[doc].doc_name = doc_name;
        cout << "\t\t\t Appointment Booked!" << endl;
        cout << "\n\n";
        pat_no++;
    }
    else
    {
        cout << "\t\t Appointment not booked! Try next day." << endl;
    }
    // SetConsoleTextAttribute(h, 7);
}

void view_appointments(int pat, patient p_arr[], doctor arr[])
{
    //----------------------View Appointments-------------------------
    // SetConsoleTextAttribute(h, 4);
    cout << "\t\t _________________" << endl;
    cout << "\t\t|                 |" << endl;
    cout << "\t\t|VIEW APPOINTMENTS|" << endl;
    cout << "\t\t|_________________|" << endl;
    // SetConsoleTextAttribute(h, 4);
    cout << "\n\n\n";
    // SetConsoleTextAttribute(h, 9);
    cout << "*************************************************************************************************************************" << endl;
    // SetConsoleTextAttribute(h, 9);
    // SetConsoleTextAttribute(h, 4);
    cout << "\tPatient Name\tPatient Age\tPatient Disease\tPatient blood group\tPatient Cnic\tDoctor Name" << endl;
    cout << "_________________________________________________________________________________________________________________________" << endl;
    // SetConsoleTextAttribute(h, 4);
    // SetConsoleTextAttribute(h, 7);
    for (int i = 0; i < pat; i++)
    {
        cout << "\t" << p_arr[i].p_name << "\t\t" << p_arr[i].p_age << "\t\t" << p_arr[i].p_disease << "\t\t" << p_arr[i].p_blood << "\t\t" << p_arr[i].p_cnic << "\t\t" << arr[i].doc_name << endl;
    }
    // SetConsoleTextAttribute(h, 7);
    // SetConsoleTextAttribute(h, 9);
    cout << "*************************************************************************************************************************" << endl;
    // SetConsoleTextAttribute(h, 9);
    // SetConsoleTextAttribute(h, 7);
}

void search_name(int pat, patient p_arr[])
{
    //--------------------search patient by name------------------------
    // SetConsoleTextAttribute(h, 7);
    string name;
    cout << "\n\n\n";
    cout << "Enter patient name ";
    cin >> name;
    // SetConsoleTextAttribute(h, 7);
    cout << endl;
    cout << "\n\n\n\n";
    // SetConsoleTextAttribute(h, 4);
    cout << "\t\t _________________" << endl;
    cout << "\t\t|                 |" << endl;
    cout << "\t\t|  VIEW PATIENT   |" << endl;
    cout << "\t\t|_________________|" << endl;
    // SetConsoleTextAttribute(h, 4);
    cout << "\n\n\n";
    // SetConsoleTextAttribute(h, 9);
    cout << "*************************************************************************************************************************" << endl;
    // SetConsoleTextAttribute(h, 9);
    // SetConsoleTextAttribute(h, 4);
    cout << "\tPatient Name\tID\tAge\tDisease\tGender\tBlood_Group\tCNIC\tMobile-No\tAddress" << endl;
    cout << "____________________________________________________________________________________________________________________________" << endl;
    // SetConsoleTextAttribute(h, 4);
    // SetConsoleTextAttribute(h, 7);
    for (int i = 0; i < pat; i++)
    {
        if (name == p_arr[i].p_name)
        {
            cout << "\t" << p_arr[i].p_name << "\t" << p_arr[i].p_id << "\t" << p_arr[i].p_age << "\t" << p_arr[i].p_disease << "\t" << p_arr[i].p_gender << "\t" << p_arr[i].p_blood << "\t" << p_arr[i].p_cnic << "\t" << p_arr[i].p_mob << "\t" << p_arr[i].p_add << endl;
            break;
            // SetConsoleTextAttribute(h, 7);
        }
        else
        {
            cout << "Invalid name" << endl;
            break;
        }
    }
    // SetConsoleTextAttribute(h, 9);
    cout << "*************************************************************************************************************************" << endl;
    // SetConsoleTextAttribute(h, 9);
}

void view_instructions()
{
    //-----------------View hospital instructions---------------------
    // SetConsoleTextAttribute(h, 7);
    cout << "\n\n\n";
    cout << "1- Make sure you are visiting hospital during visiting hours." << endl;
    cout << "2- Keep your voice low down and phone on silent in earmarked zone." << endl;
    cout << "3- Don't break hospital rules or violate safety." << endl;
    cout << "4- Don't touch any type of equipment." << endl;
    cout << "5- We provide advancing healthcare quality and patient safety." << endl;
    cout << "6- We are making healthcare data and perfomance measures transparent and publicly available." << endl;
    cout << "\n\n\n";
    // SetConsoleTextAttribute(h, 7);
}

void available_test()
{
    string test_name;
    // SetConsoleTextAttribute(h, 4);
    cout << "\t\t _________________" << endl;
    cout << "\t\t|                 |" << endl;
    cout << "\t\t|  TEST DETAILS   |" << endl;
    cout << "\t\t|_________________|" << endl;
    // SetConsoleTextAttribute(h, 4);
    cout << "\n\n\n";
    // SetConsoleTextAttribute(h, 9);
    cout << "\t ECG      " << endl;
    cout << "\t Liver Panel" << endl;
    cout << "\t Hemoglobin A1C" << endl;
    cout << "\t CBC          " << endl;
    // SetConsoleTextAttribute(h, 9);
    cout << "\n\n";
    // SetConsoleTextAttribute(h, 7);
    cout << " Enter your test name ";
    cin >> test_name;
    if (test_name == "ECG" || test_name == "Ecg" || test_name == "ecg")
    {

        cout << "Available" << endl;
    }
    else if (test_name == "Liver panel" || test_name == "LP" || test_name == "lp" || test_name == "liver panel")
    {
        cout << "Available" << endl;
    }
    else if (test_name == "hmg" || test_name == "Hmg" || test_name == "hemoglobin")
    {
        cout << "Available" << endl;
    }
    else if (test_name == "cbc" || test_name == "Cbc" || test_name == "CBC")
    {
        cout << "Available" << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
    // SetConsoleTextAttribute(h, 7);
}

void prescription()
{
    // SetConsoleTextAttribute(h, 4);
    cout << "\n\n\n";
    cout << "\t\t _________________" << endl;
    cout << "\t\t|                 |" << endl;
    cout << "\t\t|  PRESCRIPTIONS  |" << endl;
    cout << "\t\t|_________________|" << endl;
    // SetConsoleTextAttribute(h, 4);
    cout << "\n\n";
    // SetConsoleTextAttribute(h, 7);
    cout << "Medicines given " << endl;
    cout << "-----1-    Drop Calpol 100" << endl;
    cout << " PARACETAMOL(100MG) " << endl;
    cout << "  0.75ml_Stat " << endl;
    cout << "-----2-    Syrup ibugesic Plus" << endl;
    cout << "  2ml - SoS" << endl;
    cout << "-----3-    Drop Ascroil LS" << endl;
    cout << " AMBROXOL(7.5)+LEVOSALBUTAMOL(0.25MG)+GUAIFENSIN" << endl;
    cout << "  1ml -3 times a day X 5 days(O--O--O)" << endl;
    cout << "-----4-    Drop Atarax" << endl;
    cout << "  HYDROXYZINE(6 MG)" << endl;
    cout << "  0.5ml- 2 times a day X 5 days(O--O)" << endl;
    cout << "-----5-     Nasoclear Nasal " << endl;
    cout << "  3 times a day X 5 days(O--O--O)" << endl;

    // SetConsoleTextAttribute(h, 7);
}

void view_prescription()
{
    prescription();
}

void view_records(int pat, patient p_arr[])
{
    string name;
    cout << "\n\n\n";
    cout << "Enter patient name ";
    cin >> name;
    // SetConsoleTextAttribute(h, 7);
    cout << endl;
    cout << "\n\n\n\n";
    // SetConsoleTextAttribute(h, 4);
    cout << "\t\t _________________" << endl;
    cout << "\t\t|                 |" << endl;
    cout << "\t\t|  VIEW PATIENT   |" << endl;
    cout << "\t\t|_________________|" << endl;
    // SetConsoleTextAttribute(h, 4);
    cout << "\n\n\n";
    // SetConsoleTextAttribute(h, 9);
    cout << "*************************************************************************************************************************" << endl;
    // SetConsoleTextAttribute(h, 9);
    // SetConsoleTextAttribute(h, 4);
    cout << "\tPatient Name\tID\tAge\tDisease\tGender\tBlood_Group\tCNIC\tMobile-No\tAddress" << endl;
    cout << "____________________________________________________________________________________________________________________________" << endl;
    // SetConsoleTextAttribute(h, 4);
    for (int i = 0; i <= pat; i++)
    {
        if (name == p_arr[i].p_name)
        {
            // SetConsoleTextAttribute(h, 7);
            cout << "\t" << p_arr[i].p_name << "\t" << p_arr[i].p_id << "\t" << p_arr[i].p_age << "\t" << p_arr[i].p_disease << "\t" << p_arr[i].p_gender << "\t" << p_arr[i].p_blood << "\t" << p_arr[i].p_cnic << "\t" << p_arr[i].p_mob << "\t" << p_arr[i].p_add << endl;
            break;
            // SetConsoleTextAttribute(h, 7);
        }
        else
        {
            cout << "Invalid name" << endl;
            break;
        }
    }
    // SetConsoleTextAttribute(h, 9);
    cout << "*************************************************************************************************************************" << endl;
    // SetConsoleTextAttribute(h, 9);
}

string parseData(string record, int field)
{
    int commacount = 1;
    string item;
    int index = 0;
    while (true)
    {
        char ch = record[index];
        if (ch == '\0')
        {

            return item;
        }
        if (ch == ',')
        {
            commacount++;
        }
        else if (commacount == field)
        {
            item = item + ch;
        }
        index++;
    }
    return item;
}
  
void load_doctordata(doctor arr[], int doc)
{
    string word;
    fstream file;
    file.open("doctor.txt", ios::in);
    if (!file)
        return;
    while (!file.eof())
    {
        getline(file, word);
        if (word != " " && word != "" && word != "\0")
        {
            arr[doc].doc_name = parseData(word, 1);
            arr[doc].doc_gender = parseData(word, 2);
            arr[doc].doc_age = stoi(parseData(word, 3));
            arr[doc].doc_spec = parseData(word, 4);
            arr[doc].doc_blood = parseData(word, 5);
            arr[doc].doc_id = parseData(word, 6);
            arr[doc].doc_mob = parseData(word, 7);
            arr[doc].doc_add = parseData(word, 8);
            arr[doc].doc_mail = parseData(word, 9);
            doc++;
        }
    }
    cout << doc;
    getch();
    file.close();
}

void load_patientdata(int pat, patient p_arr[])
{
    string word;
    fstream file;
    file.open("patient.txt", ios::in);
    if (!file)
        return;
    while (!file.eof())
    {
        getline(file, word);
        if (word != " " && word != "" && word != "\0")
        {
            p_arr[pat].p_name = parseData(word, 1);
            p_arr[pat].p_age = stoi(parseData(word, 2));
            p_arr[pat].p_disease = parseData(word, 3);
            p_arr[pat].p_blood = parseData(word, 4);
            p_arr[pat].p_cnic = parseData(word, 5);
            p_arr[pat].p_id = parseData(word, 6);
            p_arr[pat].p_gender = parseData(word, 7);
            p_arr[pat].p_mob = parseData(word, 8);
            p_arr[pat].p_add = parseData(word, 9);
            pat++;
        }
    }
}

void update_patientdata(patient p_arr[], doctor arr[], int pat)
{
    fstream file;
    file.open("patient.txt", ios::out);
    for (int i = 0; i < pat; i++)
    {
        file << p_arr[i].p_name << "," << p_arr[i].p_age << "," << p_arr[i].p_disease << "," << p_arr[i].p_blood << "," << p_arr[i].p_cnic << "," << p_arr[i].p_id << "," << p_arr[i].p_gender << "," << p_arr[i].p_mob << "," << p_arr[i].p_add << endl;
    }
    file.close();
}

void update_doctordata(doctor arr[], int doc)
{
    fstream file;
    file.open("doctor.txt", ios::out);
    for (int i = 0; i < (doc); i++)
    {
        file << arr[i].doc_name << "," << arr[i].doc_gender << "," << arr[i].doc_age << "," << arr[i].doc_spec << "," << arr[i].doc_blood << "," << arr[i].doc_id << "," << arr[i].doc_mob << "," << arr[i].doc_add << "," << arr[i].doc_mail << endl;
    }
    file.close();
}

void doctor_sort(int doc, doctor arr[])
{
    int min = 0, temp1;
    string temp;
    for (int i = 0; i < doc; i++)
    {
        for (int j = i + 1; j < doc; j++)
        {
            if (arr[j].doc_age < arr[i].doc_age)
            {
                temp = arr[i].doc_name;
                arr[i].doc_name = arr[j].doc_name;
                arr[j].doc_name = temp;

                temp = arr[i].doc_id;
                arr[i].doc_id = arr[j].doc_id;
                arr[j].doc_id = temp;

                temp = arr[i].doc_gender;
                arr[i].doc_gender = arr[j].doc_gender;
                arr[j].doc_gender = temp;

                temp1 = arr[i].doc_age;
                arr[i].doc_age = arr[j].doc_age;
                arr[j].doc_age = temp1;

                temp = arr[i].doc_blood;
                arr[i].doc_blood = arr[j].doc_blood;
                arr[j].doc_blood = temp;

                temp = arr[i].doc_add;
                arr[i].doc_add = arr[j].doc_add;
                arr[j].doc_add = temp;

                temp = arr[i].doc_spec;
                arr[i].doc_spec = arr[j].doc_spec;
                arr[j].doc_spec = temp;

                temp = arr[i].doc_mob;
                arr[i].doc_mob = arr[j].doc_mob;
                arr[j].doc_mob = temp;

                temp = arr[i].doc_mail;
                arr[i].doc_mail = arr[j].doc_mail;
                arr[j].doc_mail = temp;
            }
        }
    }
}

void patient_sort(int pat, patient p_arr[])
{
    int min = 0, temp1;
    string temp;
    for (int i = 0; i < pat; i++)
    {
        for (int j = i + 1; j < pat; j++)
        {
            if (p_arr[j].p_age < p_arr[i].p_age)
            {
                temp = p_arr[i].p_name;
                p_arr[i].p_name = p_arr[j].p_name;
                p_arr[j].p_name = temp;

                temp = p_arr[i].p_id;
                p_arr[i].p_id = p_arr[j].p_id;
                p_arr[j].p_id = temp;

                temp = p_arr[i].p_gender;
                p_arr[i].p_gender = p_arr[j].p_gender;
                p_arr[j].p_gender = temp;

                temp1 = p_arr[i].p_age;
                p_arr[i].p_age = p_arr[j].p_age;
                p_arr[j].p_age = temp1;

                temp = p_arr[i].p_blood;
                p_arr[i].p_blood = p_arr[j].p_blood;
                p_arr[j].p_blood = temp;

                temp = p_arr[i].p_cnic;
                p_arr[i].p_cnic = p_arr[j].p_cnic;
                p_arr[j].p_cnic = temp;

                temp = p_arr[i].p_disease;
                p_arr[i].p_disease = p_arr[j].p_disease;
                p_arr[j].p_disease = temp;

                temp = p_arr[i].p_mob;
                p_arr[i].p_mob = p_arr[j].p_mob;
                p_arr[j].p_mob = temp;
            }
        }
    }
}

main()
{
    //------------ main code -----------------------
    const int size = 20;
    int option = 0;
    string login = " ";
    int doc = 0;
    int count = 0;
    int pat = 0;
    int tests = 0;
    int pat_no = 0;
    doctor arr[doc];
    patient p_arr[pat];
    roles array[size];
    clear_screen();
    load_doctordata(arr,doc);
    load_patientdata(pat,p_arr);
    patient_sort(pat,p_arr);
    doctor_sort(doc,arr);
    addData("admin", "321", "Admin", count , size , array);
    addData("doctor", "321", "Doctor", count, size , array);
    addData("patient", "321", "Patient", count, size, array);
    while (option < 5)
    {

        clear_screen();
        header();
        hms_header();
        option = menu();
        if (option == 1)
        { // start of if
            string w = who(size,login,array);
            system("cls");
            string adminop = " ";
            if (w == "Admin")
            {

                patient_sort(pat,p_arr);
                clear_screen();
                while (true)
                { // start of while
                    adminop = Admin_menu();
                    if (adminop == "1")
                    {
                        clear_screen();
                        header();
                        add_doctors(doc,arr);
                        clear_screen();
                    }
                    else if (adminop == "2")
                    {
                        doctor_sort(doc,arr);
                        clear_screen();
                        header();
                        view_doctors(doc,arr);
                        clear_screen();
                    }
                    else if (adminop == "3")
                    {
                        doctor_sort(doc,arr);
                        clear_screen();
                        header();
                        view_doctors(doc,arr);
                        delete_doctors(doc,arr);
                        clear_screen();
                    }
                    else if (adminop == "4")
                    {
                        clear_screen();
                        header();
                        update_doctors(doc,arr);
                        clear_screen();
                    }
                    else if (adminop == "5")
                    {
                        patient_sort(pat,p_arr);
                        clear_screen();
                        header();
                        view_patients(pat,p_arr);
                        clear_screen();
                    }
                    else if (adminop == "6")
                    {
                        clear_screen();
                        header();
                        view_patients(pat,p_arr);
                        delete_patients(pat,p_arr);
                        clear_screen();
                    }
                    else if (adminop == "7")
                    {
                        clear_screen();
                        header();
                        available_test();
                        clear_screen();
                    }
                    else if (adminop == "8")
                    {
                        clear_screen();
                        header();
                        view_appointments(pat,p_arr,arr);
                        clear_screen();
                    }
                    else if (adminop == "9")
                    {
                        clear_screen();
                        header();
                        view_instructions();
                        clear_screen();
                    }
                    else if (adminop == "10")
                    {
                        clear_screen();
                        break;
                    }
                    else
                    {
                        cout << "Invalid Option" << endl;
                        clear_screen();
                    }
                }
            }
            else
            {
                cout << "Invalid input" << endl;
            }
            clear_screen();
            update_doctordata(arr,doc);
        }
        else if (option == 2)
        { // start of if
            doctor_sort(doc,arr);
            patient_sort(pat,p_arr);
           string w = who(size,login,array);
            if (w == "Doctor")
            {
                clear_screen();
                string doctorop = " ";
                while (true)
                { // start of while
                    doctorop = Doctor_menu();
                    if (doctorop == "1")
                    {
                        clear_screen();
                        header();
                        add_patients(pat,p_arr);
                        clear_screen();
                    }
                    else if (doctorop == "2")
                    {
                        clear_screen();
                        header();
                        patient_sort(pat,p_arr);
                        view_patients(pat,p_arr);
                        clear_screen();
                    }
                    else if (doctorop == "3")
                    {
                        clear_screen();
                        header();
                        patient_sort(pat,p_arr);
                        delete_patients(pat,p_arr);
                        clear_screen();
                    }
                    else if (doctorop == "4")
                    {
                        clear_screen();
                        header();
                        search_name(pat,p_arr);
                        clear_screen();
                    }
                    else if (doctorop == "5")
                    {
                        clear_screen();
                        header();
                        prescription();
                        clear_screen();
                    }
                    else if (doctorop == "6")
                    {
                        clear_screen();
                        header();
                        view_appointments(pat,p_arr,arr);
                        clear_screen();
                    }
                    else if (doctorop == "7")
                    {
                        clear_screen();
                        header();
                        available_test();
                        clear_screen();
                    }
                    else if (doctorop == "8")
                    {
                        clear_screen();
                        header();
                        view_instructions();
                        clear_screen();
                    }
                    else if (doctorop == "9")
                    {
                        break;
                    }
                    else
                    {
                        cout << "Invalid option " << endl;
                        clear_screen();
                    }
                }
            }
            else
            {
                cout << "Invalid " << endl;
                clear_screen();
            }
            update_patientdata(p_arr,arr,pat);
        }
        else if (option == 3)
        { // start of if
            doctor_sort(doc,arr);
            patient_sort(pat,p_arr);
            string w = who(size,login,array);
            if (w == "Patient")
            {
                clear_screen();
                string patientop = " ";
                while (true)
                { // start of while
                    patientop = Patient_menu();
                    if (patientop == "1")
                    {
                        clear_screen();
                        header();
                        book_appointments(p_arr,arr,pat,doc,pat_no);
                        clear_screen();
                    }
                    else if (patientop == "2")
                    {
                        clear_screen();
                        header();
                        view_appointments(pat,p_arr,arr);
                        clear_screen();
                    }
                    else if (patientop == "3")
                    {
                        clear_screen();
                        header();
                        view_doctors(doc,arr);
                        clear_screen();
                    }
                    else if (patientop == "4")
                    {
                        clear_screen();
                        header();
                        view_records(pat,p_arr);
                        clear_screen();
                    }
                    else if (patientop == "5")
                    {
                        clear_screen();
                        header();
                        view_prescription();
                        clear_screen();
                    }
                    else if (patientop == "6")
                    {
                        break;
                    }
                    else
                    {
                        cout << "Invalid " << endl;
                        clear_screen();
                    }
                }
            }
            else
            {
                cout << "Invalid " << endl;
                clear_screen();
            }
        }
        else if (option == 4)
        {
            clear_screen();
            header();
            view_instructions();
        }
    }
}
