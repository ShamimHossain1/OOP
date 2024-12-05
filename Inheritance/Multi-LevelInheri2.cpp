#include <iostream>

// ----------  Multilevel Inheritance

using namespace std;

class Student
{
protected:
    int Roll_Num;

public:
    void setRoll(int);
    void getRoll();
};

void Student ::setRoll(int Roll)
{
    Roll_Num = Roll;
}
void Student ::getRoll()
{
    cout << "Roll Number: " << Roll_Num << endl;
}

class Exam : public Student
{

protected:
    int Math;
    int Physics;

public:
    void setMarks(int, int);
    void getMarks();
};

void Exam ::setMarks(int m1, int m2)
{
    Math = m1;
    Physics = m2;
}

void Exam ::getMarks()
{
    cout << "Math Marks: " << Math << endl;
    cout << "Physics Marks: " << Physics << endl;
}

class Result : public Exam
{
protected:
    float percentage;

public:
    void calculatePercentage();
    void displayResult();
};
void Result ::calculatePercentage()
{
    percentage = (Math + Physics) / 2.0;
}

void Result ::displayResult()
{
    calculatePercentage();
    getRoll();
    getMarks();
    cout << "Percentage: " << percentage << "%" << endl;
}

int main()
{

    Result Shamim;
    Shamim.setRoll(1);
    Shamim.setMarks(30, 40);
    Shamim.displayResult();

    return 0;
}