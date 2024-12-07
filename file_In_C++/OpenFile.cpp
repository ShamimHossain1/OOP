#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){

    // ofstream write;
    // write.open("FileText.txt");
    // write<<"THis is me";
    // write.close();
    
    string text;
    ifstream read;
    read.open("FileText.txt");

    while(read.eof()==0){
        getline(read, text);
        cout<<text<<endl;
    }
    read.close();

    return 0;
}