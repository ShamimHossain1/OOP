#include <iostream>
#include <list>

using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{

    list<int> list1;
    list1.push_back(65);
    list1.push_back(78);
    list1.push_back(90);
    list1.push_back(45);
    list1.push_back(23);

    display(list1);

        list<int> list2(3);
        list<int> :: iterator iter;
        iter = list2.begin();
        *iter = 45;
        iter++;
        *iter = 45;
        iter++;
        *iter = 45;
        iter++;
        display(list2);


    return 0;
}