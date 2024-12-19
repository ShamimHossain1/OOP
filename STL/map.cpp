#include<iostream>
#include<map>

using namespace std;
    

int main(){

map<string, int> m;
m["tv"] = 10000;
m["radio"] = 5000;
m["computer"] = 20000;

m.insert({"camera", 25});
m.emplace("mobile", 5000);
m.erase("tv");

for(auto p: m){
    cout << p.first << " " << p.second << endl;
}

cout<<"count = "<<m.count("camera")<<endl;

if(m.find("tv") !=m.end()){
    cout<<"camera is found"<<endl;
}
else{
    cout<<"camera is not found"<<endl;
}

    return 0;
}