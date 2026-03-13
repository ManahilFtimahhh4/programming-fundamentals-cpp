#include <iostream>
#include <fstream>
using namespace std;

void getStudentDetails(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int size, int &count);

void saveToFile(string names[], int ages[], float matricMarks[],
                float fscMarks[], float ecatMarks[], int count, string fileName);

int main()
{

    const int size = 100;
    string names[size];
    int ages[size];
    float matricMarks[size], fscMarks[size], ecatMarks[size];
    int count=0;

    getStudentDetails(names, ages, matricMarks, fscMarks, ecatMarks, size, count);

    saveToFile( names, ages,  matricMarks,fscMarks,  ecatMarks ,count,"student.txt");

    return 0;

}
void getStudentDetails(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int size, int &count)
{
    cin.ignore();
    while (true)
    {
        cout << "Enter student name : " << endl;
        
        getline(cin, names[count]);
        cout << "Enter  Student age : " << endl;
        cin >> ages[count];
        cout << "Enter  students fsc marks : " << endl;
        cin >> fscMarks[count];
        cout << "Enter  students ecat marks : " << endl;
        cin >> ecatMarks[count];
        cout << "Enter  students martric marks : " << endl;
        cin>>matricMarks[count];
        cout << "enter NO to stop addding data and YES for more addittion" << endl;
        count++;
        string opt;
        cin >> opt;
        cin.ignore();
        if (opt == "no")
        {

            break;
        }
    }
}
void saveToFile(string names[], int ages[], float matricMarks[],
                float fscMarks[], float ecatMarks[], int count, string fileName)
{
    fstream file;
    file.open("student.txt", ios::out);

    for (int i = 0; i < count; i++)
    {
        file << "Student #" << i + 1 << endl;
        file << "student name : " << names[i] << endl;
        file << "student age : " << ages[i] << endl;
        file << "student fsc marks : " << fscMarks[i] << endl;
        file << "student ecat marks : " << ecatMarks[i] << endl;
        file << "student matric marks : " << matricMarks[i] << endl;
    }

    file.close();
}
