#include<iostream>
#include<fstream>
#include <string>

using namespace std;

int main(){
    string st = "Shamim Hossain";
    string st2;

    // Opening file using constructor and writing in it
    ofstream out("FileText.txt");
    out<<st;

    // Opening file using constructor and reading it
    ifstream in("FileText.txt");
    // in>>st2;
    getline(in, st2);
    cout<<st2;


    return 0;
}