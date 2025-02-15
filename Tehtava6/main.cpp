#include "student.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int selection = 0;
    vector<Student> studentList;    // Vector opiskelijoiden tallentamiseen
    string name;
    int age;

    do {
        // Valikko
        cout << "\nSelect\n";
        cout << "Add students = 0\n";
        cout << "Print all students = 1\n";
        cout << "Sort and print students according to Name = 2\n";
        cout << "Sort and print students according to Age = 3\n";
        cout << "Find and print student = 4\n";
        cin >> selection;

        switch(selection) {
        case 0:     // Lisää uusi opiskelija
            cout << "Name: ";
            cin >> name;
            cout << "Age: ";
            cin >> age;
            studentList.push_back(Student(name, age));
            break;

        case 1:     // Tulosta kaikki opiskelijat
            for(auto& student : studentList)
                student.printStudentInfo();
            break;

        case 2:     // Järjestä ja tulosta nimen mukaan
            sort(studentList.begin(), studentList.end(),
                 [](Student a, Student b) { return a.getName() < b.getName(); });
            for(auto& student : studentList)
                student.printStudentInfo();
            break;

        case 3:     // Järjestä ja tulosta iän mukaan
            sort(studentList.begin(), studentList.end(),
                 [](Student a, Student b) { return a.getAge() < b.getAge(); });
            for(auto& student : studentList)
                student.printStudentInfo();
            break;

        case 4:     // Etsi ja tulosta opiskelija nimen perusteella
            cout << "Search name: ";
            cin >> name;
            for(auto& student : studentList)
                if(student.getName() == name)
                    student.printStudentInfo();
            break;
        }
    } while(selection < 5);    // Jatka kunnes valinta on 5 tai suurempi
    return 0;
}
