#include<iostream>
#include<fstream>
using namespace std;

int countlines(string filename);

int main(){

string filename="mad.txt";
int total=countlines(filename);

cout << "Total number of lines in the file: " << total << endl;

}
int countlines(string filename){
fstream file;
file.open(filename,ios::in);
if (!file) {
        cout << "Could not open the file!" << endl;
        return 0;
}
string line;
int count=0;
    while(getline (file,line)){

        count++;
    }
    file.close();
    return count;
}