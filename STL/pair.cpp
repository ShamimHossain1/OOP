#include<iostream>
#include<vector>

using namespace std;
    

int main(){

pair <int, int> p = {3, 5};
cout << "First element: " << p.first << endl;
cout << "Second element: " << p.second << endl;

pair<int, pair<int, int>> q = {1,{1, 3}};
cout << "First element: " << q.first << endl;
cout << "Second element: " << q.second.first << endl;
cout << "Third element: " << q.second.second << endl;


    return 0;
}