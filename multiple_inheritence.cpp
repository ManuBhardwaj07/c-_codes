#include<iostream>
using namespace std;
class Student
{
    protected :
                int roll_number;
    public :
                void set_roll_number(int);
                void get_roll_number();
};
void Student::set_roll_number(int r)
{
    roll_number=r;
}
void Student::get_roll_number()
{
    cout<<"The roll number is "<<roll_number<<endl;
}
class Exam:public Student
{
    protected :
                float math;
                float physics;
    public :
                void set_marks(float,float);
                void get_marks();
};
void Exam::set_marks(float m1,float m2)
{
    math=m1;
    physics=m2;
}
void Exam::get_marks()
{
    cout<<"The marks obtained in math is "<<math<<endl;
    cout<<"The marks obtained in physics is "<<physics<<endl;
}
class Result:public Exam
{
    float percentage;
    public :
            void display_result()
            {
                cout<<"Your result is "<<(math+physics)/2<<"%"<<endl;
            }
};
int main()
{
    Result ushant;
    ushant.set_roll_number(352);
    ushant.set_marks(99,94);
    ushant.display_result();
    return 0;

}