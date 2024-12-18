#include<iostream>
#include<stack>

using namespace std;
    

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    stack<int> s2;
    s2.swap(s);

    cout<<"s size :"<<s.size()<<endl;
    cout<<"s2 size :"<<s2.size();

    // cout<<"top = "<<s.top();
    // while(!s.empty()){
    //     cout<<s.top()<<endl;
    //     s.pop();
    // }



    return 0;
}