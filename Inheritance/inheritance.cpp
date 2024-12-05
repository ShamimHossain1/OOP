#include <iostream>

// ----------  Single Inheritance

using namespace std;

// Base Class
class Emp
{

public:
  int id;
  float salary;
  Emp(int code, float money)
  {
    id = code;
    salary = money;
  }
  Emp() {}
};

/*

// Derived Class syntax

class {derived class name} : {visibility mode} {base class name}
  {
    ---content---
  }

Note: Default visibility mode is private.

*/

class Manager : public Emp
{
public:
  int languageCode = 7;

  Manager(int inpid)
  {
    id = inpid;
  }
};

int main()
{

  Emp shamim(1, 1000), sauda(2, 2000);

  cout << "Shamim Salary " << shamim.salary << endl;
  cout << "Sauda Salary " << sauda.salary << endl;

  Manager SaudaManager(2);

  return 0;
}