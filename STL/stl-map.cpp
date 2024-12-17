#include<iostream>
#include<string>
#include<map>

using namespace std;
    
// Map is an associative array
int main(){

    map<string, int> marks;
    marks["John"] = 90;
    marks["Alice"] = 85;
    marks["Bob"] = 95;
    marks["Charlie"] = 80;
    marks["David"] = 92;

    map<string, int> :: iterator it;
    for (it = marks.begin(); it != marks.end(); it++)
    {
        cout << it->first << " " << it->second << endl;

    }

    return 0;
}