#include <iostream>

using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the id of employee" << endl;
        cin >> id;
    }

    void display(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};

int main()
{

    Employee Strix[4];

    for (int i = 0; i < 4; i++)
    {
        Strix[i].setId();
       
    }
    for (int i = 0; i < 4; i++)
    {
        cout<<"Employee Number: "<<i+1<< endl;
        Strix[i].display();
    }



    return 0;
}