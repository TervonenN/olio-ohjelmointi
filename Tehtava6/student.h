#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;
class Student
{
private:
    string Name;
    int Age;

public:
    Student(string name, int age);
    void setAge(int age);
    void setName(string name);
    string getName();
    int getAge();
    void printStudentInfo();
};

#endif // STUDENT_H
