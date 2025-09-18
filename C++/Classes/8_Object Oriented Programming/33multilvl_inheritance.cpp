#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number();
};

void Student::set_roll_number(int r)
{
    roll_number = r;
}

void Student::get_roll_number()
{
    cout << "Roll Number: " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam ::get_marks()
{
    cout << "Marks obtained in Physics: " << physics << endl;
    cout << "Marks obtained in Mathematics: " << maths << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display_results()
    {
        get_roll_number();
        get_marks();
        cout << "Percentage: " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
    Result harry;
    harry.set_roll_number(1106);
    harry.set_marks(95.0, 92.0);
    harry.display_results();
    return 0;
}