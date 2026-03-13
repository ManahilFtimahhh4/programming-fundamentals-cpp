#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
using namespace std;

const int MAX_USERS = 100;
const int MAX_SERVICES = 11;

struct User
{
    string name;
    string city;
    int cnic;
    string date;
    int selectedServices[4];
    bool filled = false;
};

User users[MAX_USERS];
int userCount = 0;

// Function declarations
void header();
void clearScreen();
void displayServices();
void registerUser();
void showAllRecords();
void ownermenu();
void editservices();
void displayServicess();
void benificiary();

int main()
{

    while (true)
    {

        string id;
        if (id == "OWNER")
        {
            while (true)
            {
                ownermenu();
                int option;
                cin >> option;
                clearScreen();
                if (option == 1)
                {
                    registerUser();
                }
                else if (option == 2)
                {
                    showAllRecords();
                }
                else if (option == 3)
                {

                    editservices();
                }
                else if (option == 4)
                {

                }

                else if (option == 5)
                {
                    cout << "Exiting program. Goodbye!" << endl;
                    break;
                }
                else
                {
                    cout << "Invalid option. Try again." << endl;
                }

                cout << "\nPress any key to return to the main menu..." << endl;
                getch();
                clearScreen();
            }

            return 0;
        }
    }
        while(true)
        {
            string id;
            if(id=="benificiary"){

            



            }



        }


}

void header()
{
    cout << "###########################################################" << endl;
    cout << "##           COMMUNITY DEVELOPMENT INITIATIVES           ##" << endl;
    cout << "###########################################################\n"
         << endl;
}

void ownermenu()
{

    while (true)
    {
        header();
        cout << "1. Register User and Select Services" << endl;
        cout << "2. Show All Records" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
    }
}

void clearScreen() 
{
    cout << "\nPress any key to continue..." << endl;
    cin.ignore();
    cin.get();
    system("cls");
}

void displayServices()
{
    void displayServices()
    {
        fstream file;
        file.open("services.txt", ios::in); // Open the file in read mode

        if (!file)
        {
            cout << "Error: Could not open services.txt\n";
            return;
        }

        string line;
        int id = 1;

        cout << "\n===== SERVICES OFFERED BY OUR FORAM =====\n\n";

        while (getline(file, line))
        {
            cout << id << ". " << line << endl;
            id++;
        }

        cout << "\n=========================================\n";

        file.close(); // Always close the file
    }
}
void editservices()
{

    void editservices()
    {
        fstream file;
        file.open("services.txt", ios::in | ios::out);

        if (!file)
        {
            cout << "Error: could not open services.txt\n";
            return;
        }

        file.close();
    }
}

void registerUser()
{
    if (userCount >= MAX_USERS)
    {
        cout << "Maximum user limit reached." << endl;
        return;
    }

    cin.ignore();
    User &user = users[userCount];

    cout << "Enter your name: ";
    getline(cin, user.name);

    cout << "Enter your city: ";
    getline(cin, user.city);

    cout << "Enter your CNIC: ";
    cin >> user.cnic;
    cin.ignore();

    cout << "Enter registration date: ";
    getline(cin, user.date);
}

displayServicess()
{

    cout << "\nSelect up to 4 services by their ID (1-" << MAX_SERVICES << "):\n";
    for (int i = 0; i < 4; i++)
    {
        cout << "Choice #" << i + 1 << ": ";
        cin >> user.selectedServices[i];
    }

    user.filled = true;
    userCount++;

    cout << "\nUser registered and services selected successfully!\n";
}

void showAllRecords()
{
    string services[MAX_SERVICES + 1];
    ifstream file("services.txt");
    string line;
    int index = 1;
    while (getline(file, line) && index <= MAX_SERVICES)
    {
        services[index++] = line;
    }
    file.close();

    header();
    cout << "--- All User Records ---\n\n";
    for (int i = 0; i < userCount; ++i)
    {
        if (!users[i].filled)
            continue;

        const User &user = users[i];
        cout << i + 1 << ". " << user.name << " | " << user.city
             << " | CNIC: " << user.cnic << " | Date: " << user.date << "\n";
        cout << "   Services:\n";

        for (int j = 0; j < 4; j++)
        {
            int sid = user.selectedServices[j];
            if (sid >= 1 && sid <= MAX_SERVICES)
                cout << "   " << (j + 1) << ". " << services[sid] << " | ID: " << sid << "\n";
            else
                cout << "   " << (j + 1) << ". Invalid Service ID: " << sid << "\n";
        }

        cout << "--------------------------------------\n";
    }
}

void benificiarydata()
{

 while (true)
    {
        header();
        cout << "1. Register User and Select Services" << endl;
        cout << "2. Show All Records" << endl;
        cout<<"3.Enter your feedback"<<endl;
        cout<<"4."
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
    }



}
