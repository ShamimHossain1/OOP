#include <iostream>

using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_number(int);
    void get_number(void);
};

void Student::set_number(int num)
{
    roll_number = num;
}
void Student ::get_number()
{
    cout << "Roll Number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    int math;
    int physics;

public:
    void set_marks(int, int);
    void get_marks(void);
};

void Exam ::set_marks(int m1, int m2)
{
    math = m1;
    physics = m2;
}
void Exam ::get_marks()
{
    cout << "Math Marks are " << math << endl;
    cout << "Physics Marks are " << physics << endl;
}

class Result : public Exam
{
    float percentages;

public:
    void display()
    {
        get_number();
        get_marks();
        cout << "Your Result is " << (math + physics) / 2 << "%" << endl;
    }
};

int main()
{

    Result Sauda;
    Sauda.set_number(123);
    Sauda.set_marks(70, 80);
    Sauda.display();

    return 0;
}