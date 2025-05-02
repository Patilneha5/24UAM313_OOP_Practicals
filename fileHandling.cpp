//file handling program in c++ to reading and writing data on a file.
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{ 
    ofstream fout;
    fout.open("NewFile.txt");

     if (!fout) {
         cerr << "Error opening file!" << endl;
         return 1;
    } 
    string line; 
    int i = 0;

    cout << "Enter 5 lines of text:" << endl;
     
    while (i < 5) {
         
        getline(cin, line);
         fout << line << endl;
         i += 1;
    }
     fout.close();

     cout << "Text successfully written to NewFile.txt"
         << endl;

     return 0;
}

