#include <iostream>
#include <string>
using namespace std;

template <typename T>
struct Student {
    T name;
    int age;
    string course;
    string department;

    Student(T n, int a, string c, string d)
        : name(n), age(a), course(c), department(d) {}

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Student<string> student1("Tanishq", 19, "Physics", "Science");
    student1.display();

    Student<string> student2("Milind", 19, "Mathematics", "Science");
    student2.display();

    return 0;
}
