#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <conio.h>
using namespace std;

void addUser(string userName, string password, string role);
void signUP(string userName, string password, string role, string fileName);
void signIn(string userName, string password, string role, string fileName);
int option();
void clearScren();

const int TOTAL_USERS = 10;
int count_users = 0;
string usernameA[TOTAL_USERS];
string passwordA[TOTAL_USERS];
string roleA[TOTAL_USERS];
string file = "users.txt";

main()
{

    while (true)
    {
        system("cls");
        int op = option();
        if (op == 1)
        {
            string name, password, role;
            cout << "enter username : ";
            cin >> name;
            cout << "enter password : ";
            cin >> password;
            cout << "enter role : ";
            cin >> role;

            addUser(name, password, role);
            signUP(name, password, role, file);
        }
        else if (op == 2)
        {
            string name, password, role;
            cout << "enter username : ";
            cin >> name;
            cout << "enter password : ";
            cin >> password;
            cout << "enter role : ";
            cin >> role;

            signIn(name, password, role, file);
        }
        else if (op == 3)
        {
            break;
        }
        else
        {
            cout << "invalid option ";
        }
        clearScren();
    }
}

int option()
{
    cout << "enter your option :" << endl;
    cout << "1- sign up" << endl;
    cout << "2- sign in" << endl;
    cout << "3- exit " << endl;
    cout << " option ... ";
    int option;
    cin >> option;
    return option;
}

void addUser(string userName, string password, string role)
{
    if (count_users < TOTAL_USERS)
    {
        usernameA[count_users] = userName;
        passwordA[count_users] = password;
        roleA[count_users] = role;
        count_users++;
    }
    else
    {
        cout << "no more space to add users " << endl;
    }
}

void signUP(string userName, string password, string role, string fileName)
{
    fstream write;
    write.open(fileName, ios::app);
    string record = userName + "," + password + "," + role;
    write << record << endl;
    write.close();
}

void signIn(string userName, string password, string role, string fileName)
{
    bool flag = false;
    string record;
    fstream read;
    read.open(fileName, ios::in);
    while (!read.eof())
    {
        getline(read, record);
        int comaCount = 1;
        string name;
        string pass;
        string rol;
        for (int x = 0; x < record.length(); x++)
        {
            if (record[x] == ',')
            {
                comaCount++;
            }
            else if (comaCount == 1)
            {
                name = name + record[x];
            }
        }
        comaCount = 1;
        for (int x = 0; x < record.length(); x++)
        {
            if (record[x] == ',')
            {
                comaCount++;
            }
            else if (comaCount == 2)
            {
                pass = pass + record[x];
            }
        }
        comaCount = 1;
        for (int x = 0; x < record.length(); x++)
        {
            if (record[x] == ',')
            {
                comaCount++;
            }
            else if (comaCount == 3)
            {
                rol = rol + record[x];
            }
        }
        if (name == userName && pass == password && rol == role)
        {
            cout << "you signed in " << endl;
            flag = true;

            break;
        }
    }

    if (!flag)
    {
        cout << "you are not a valid user " << endl;
    }
    read.close();
}

void clearScren()
{
    cout << "press any key to continue " << endl;
    getch();
    system("CLS");
}
