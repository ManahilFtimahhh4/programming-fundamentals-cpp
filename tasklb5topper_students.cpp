#include <iostream>
#include <fstream>
using namespace std;

void getStudentDetails(string names[], int adNumbers[], float percentages[], int size, int &count, string fileName);

void saveToFile(string names[], int adNumbers[], float percentages[], int count, string fileName);

int main()
{

    const int size = 100;
    string names[size];
    int adNumbers[size];
    float percentages[size];
    int count = 0;

    getStudentDetails(names, adNumbers, percentages, size, count,"task5.txt");

    saveToFile(names, adNumbers, percentages, count, "task5.txt");
}

void getStudentDetails(string names[], int adNumbers[], float percentages[], int size, int &count, string fileName)
{

  
    while (true)
    {
        
        cout << "enter student name : " << endl;
          cin.ignore();
        getline(cin,names[count]);
        cout << "enter addmission number : " << endl;
        cin >> adNumbers[count];
        cout << "enter percentage of student : " << endl;
        cin >> percentages[count];
        cout << "enter YES  to enter more data and NO to stop program.." << endl;
        count++;
        string opt;
        cin >> opt;
        cin.ignore();

        if (opt == "no")
        {

            break;
        }
        cin.ignore();
    }
}

void saveToFile(string names[], int adNumbers[], float percentages[], int count, string fileName)
{

    fstream file;
    file.open("task5.txt", ios::out);

    for (int i = 0; i < count; i++)
    {

        file << "student name " << names[i] << endl;
        file << "student addmission number : " << adNumbers[i] << endl;

        if (percentages[i] >= 70)
        {

            cout << "student percentage is : " << percentages[i] << endl;
        }
        
    }

    file.close();
}
