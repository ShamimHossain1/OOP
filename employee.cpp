#include <iostream>

using namespace std;

class employee
{
private:
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }

    void Display(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }
};

int employee ::count;

int main()
{

    employee shamim, sauda, chada;


    shamim.setData();
    shamim.Display();

    sauda.setData();
    sauda.Display();

    chada.setData();
    chada.Display();

    return 0;
}