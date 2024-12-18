#include<iostream>
#include<vector>

using namespace std;
    

int main(){

pair <int, int> p = {3, 5};
// cout << "First element: " << p.first << endl;
// cout << "Second element: " << p.second << endl;

pair<int, pair<int, int>> q = {1,{1, 3}};
// cout << "First element: " << q.first << endl;
// cout << "Second element: " << q.second.first << endl;
// cout << "Third element: " << q.second.second << endl;

cout<< "vector of pair"<<endl;
vector<pair<int, int>> v = {{1, 2}, {3, 4},{5, 6}};

v.push_back({7,8});
v.emplace_back(9,10);

for(auto p: v ){
    cout<<p.first<<" "<<p.second<<endl;    

}
    return 0;
}