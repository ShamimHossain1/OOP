#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> vec1(vec);



    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.pop_back();

    // vec.erase(vec.begin()+2);

    // vec.erase(vec.begin() + 2, vec.begin() + 4);
    // vec.insert(vec.begin()+2, 300);

    // vec.clear();
    // cout<< vec.empty();

    // for (int val : vec)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;

    // ?? iterator loop
    vector<int> ::iterator it;
    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout << *it << " ";
        }
        cout << endl;
    
    
    // ?? iterator reverse loop

    // vector<int> ::reverse_iterator it2;

    for (auto it2 = vec.rbegin(); it2 != vec.rend(); it2++)
    {
        cout << *it2 << " ";
        }
        cout << endl;

    // ?? iterator
    // cout<<vec.size()<<endl;
    // cout<<vec.capacity()<<endl;
    // cout<<vec.max_size()<<endl;

    // cout<<"val at index 2 : "<<vec[1]<<" or "<<vec.at(1)<<endl;
    // cout<<vec.front()<<endl;
    // cout<<vec.back()<<endl;
    // cout<<*(vec.begin())<<endl;
    // cout<<*(vec.end())<<endl;

    return 0;
}