#include <iostream>

// Virtual Base Class use in------------ Hybrid Inheritance-------------

using namespace std;

class Student
{
protected:
    int roll;

public:
    void set_number(int a)
    {
        roll = a;
    }
    void display_number()
    {
        cout << "Roll Number: " << roll << endl;
    }
};

class Test : virtual public Student
{
protected:
    float math, physics;

public:
    void set_marks(float a, float b)
    {
        math = a;
        physics = b;
    }
    void display_marks()
    {
        cout << "Math Marks: " << math << endl;
        cout << "Physics Marks: " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float a)
    {
        score = a;
    }
    void display_score()
    {
        cout << "Sports Score: " << score << endl;
    }
};

class Result : public Sports, public Test
{
private:
    float Total;

public:
    void display_result()
    {
        display_number();
        display_marks();
        display_score();
        Total = math + physics + score;
        cout << "Total Marks: " << Total << endl;
    }
};

int main()
{
    Result Sauda;
    Sauda.set_number(21);
    Sauda.set_marks(94.67, 80.34);
    Sauda.set_score(70.3);
    Sauda.display_result();
    return 0;
}