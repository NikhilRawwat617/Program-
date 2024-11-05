#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    string department;
    string course;

public:
   
    Student(string n, int a, string dep, string c)
        : name(n), age(a), department(dep), course(c) {}

   
    friend void displayStudentDetails(const Student& s);
};


void displayStudentDetails(const Student& s) {
    cout << "Student Details:" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "Department: " << s.department << endl;
    cout << "Course: " << s.course << endl;
}

int main() {
    
    Student student("Nikhil Rawat", 20, "B-Tech CSE", "Object-Oriented");

   
    displayStudentDetails(student);

    return 0;
}
