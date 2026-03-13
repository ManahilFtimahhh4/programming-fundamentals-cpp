#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>
using namespace std;

const int MAX_SERVICES = 15;

// Global arrays to store service data
string serviceNames[MAX_SERVICES];
int serviceAvailable[MAX_SERVICES];
int serviceCount = 0;

// Function declarations
string who();
void header();
void addService();
void viewServices();
void getService();
void checkRecord();
void clearScreen();
void beneficiaryMenu();
void ownerMenu();

int main() {
    while (true) {
        string id = who();

        if (id == "OWNER") {
            while (true) {
                ownerMenu();
                int ownerOption;
                cin >> ownerOption;
                clearScreen();

                if (ownerOption == 1) {
                    addService();
                } else if (ownerOption == 2) {
                    viewServices();
                } else if (ownerOption == 3) {
                    checkRecord();
                } else if (ownerOption == 4) {
                    cout << "Exiting system. Goodbye!" << endl;
                    break;
                } else {
                    cout << "Invalid choice. Please try again." << endl;
                }
                clearScreen();
            }
        } else if (id == "BENEFICIARY") {
            while (true) {
                beneficiaryMenu();
                int customerOpt;
                cin >> customerOpt;
                clearScreen();

                if (customerOpt == 1) {
                    viewServices();
                } else if (customerOpt == 2) {
                    getService();
                } else if (customerOpt == 3) {
                    checkRecord();
                } else if (customerOpt == 4) {
                    cout << "Exiting system. Goodbye!" << endl;
                    break;
                } else {
                    cout << "Invalid choice. Please try again." << endl;
                }
                clearScreen();
            }
        }

        clearScreen();
    }

    return 0;
}

// Header display
void header() {
    cout << "###########################################################" << endl;
    cout << "##                  FATEHZZ HUMANITY TRUST               ##" << endl;
    cout << "###########################################################" << endl;
}

// Clears screen and waits for key
void clearScreen() {
    cout << "PRESS ANY KEY TO CONTINUE.." << endl;
    getch();
    system("cls");
}

// Asks user role
string who() {
    header();
    cout << " USER NAME..(OWNER/BENEFICIARY): ";
    string username;
    cin >> username;
    clearScreen();
    return username;
}

// Owner menu
void ownerMenu() {
    header();
    cout << "OWNER MAIN MENU>....." << endl;
    cout << "1. Add New Service" << endl;
    cout << "2. View All Services" << endl;
    cout << "3. Check Previous Records" << endl;
    cout << "4. Exit" << endl;
}

// Beneficiary menu
void beneficiaryMenu() {
    header();
    cout << "BENEFICIARY MAIN MENU>...." << endl;
    cout << "1. View All Services" << endl;
    cout << "2. Get a Service" << endl;
    cout << "3. Check Previous Records" << endl;
    cout << "4. Exit" << endl;
}

// Add a new service
void addService() {
    header();
    if (serviceCount >= MAX_SERVICES) {
        cout << "Cannot add more services. Limit reached." << endl;
        return;
    }

    cout << "Enter service name: ";
    cin.ignore();
    getline(cin, serviceNames[serviceCount]);

    cout << "Enter number of slots available for this service: ";
    cin >> serviceAvailable[serviceCount];

    serviceCount++;
    cout << "Service added successfully!" << endl;
}

// View all services
void viewServices() {
    header();
    if (serviceCount == 0) {
        cout << "No services available." << endl;
        return;
    }

    cout << "--- Service List ---" << endl;
    for (int i = 0; i < serviceCount; i++) {
        cout << i + 1 << ". " << serviceNames[i]
             << " | Available Slots: " << serviceAvailable[i] << endl;
    }
}

// Get a service (not implemented fully yet)
void getService() {
    header();
    if (serviceCount == 0) {
        cout << "No services available." << endl;
        return;
    }

    viewServices();
    int serviceNum;
    cout << "Enter the number of the service you want to get: ";
    cin >> serviceNum;

    if (serviceNum < 1 || serviceNum > serviceCount) {
        cout << "Invalid selection." << endl;
        return;
    }

    if (serviceAvailable[serviceNum - 1] > 0) {
        serviceAvailable[serviceNum - 1]--;
        cout << "Service granted successfully!" << endl;
    } else {
        cout << "Sorry, no more slots available for this service." << endl;
    }
}

// Placeholder for checking records
void checkRecord() {
    header();
    cout << "Record checking feature is under development." << endl;
}
