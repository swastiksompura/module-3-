// 3. Inheritance Example: Person → Student, Teacher

#include <iostream>
using namespace std;

// Base Class
class Person {
public:
    string name;
    int age;

    void getDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void showDetails() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived Class: Student
class Student : public Person {
public:
    string course;

    void getStudentInfo() {
        getDetails();
        cout << "Enter course: ";
        cin >> course;
    }

    void showStudentInfo() {
        showDetails();
        cout << "Course: " << course << endl;
    }
};

// Derived Class: Teacher
class Teacher : public Person {
public:
    string subject;

    void getTeacherInfo() {
        getDetails();
        cout << "Enter subject: ";
        cin >> subject;
    }

    void showTeacherInfo() {
        showDetails();
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Student s;
    Teacher t;

    cout << "\n--- Enter Student Details ---\n";
    s.getStudentInfo();

    cout << "\n--- Enter Teacher Details ---\n";
    t.getTeacherInfo();

    cout << "\n--- Student Info ---\n";
    s.showStudentInfo();

    cout << "\n--- Teacher Info ---\n";
    t.showTeacherInfo();

    return 0;
}