#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){

    ofstream hout("FileText2.txt");

    cout<<"Enter your name: ";
    string name;
    cin>>name;
    hout<<"My name is "+name;
    hout.close();

    ifstream hin("FileText2.txt");
    string lines;
    getline(hin, lines);
    cout<<lines;
    hin.close();
    

    return 0;
}