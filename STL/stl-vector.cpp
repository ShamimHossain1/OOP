#include <iostream>
#include <vector>

using namespace std;

template<class T>
void display(vector<T> &v)
{
    cout<<"Displaying This vector";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " << endl;
    }
}

int main()
{

    vector<int> vec1;
    vector<char> vec2(4);
    //  vec2.push_back('5');
    // display(vec2);

    vector<double> vec3(4);
    vector<char> vec4(vec2);
    vector<int> v(6, 3);

    // display(vec4);
    display(v);

    int element;

    // for (int i = 0; i < 4; i++)
    // {
    //     cout << "Enter an element to add to this vector : ";
    //     cin >> element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back();

    vector<int>::iterator iter = vec1.begin();
    vec1.insert(iter, 566);
    // display(vec1);

    return 0;
}