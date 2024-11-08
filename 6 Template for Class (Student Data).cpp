#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Student {
private:
    T name;
    int age;
    string course;
    string department;

public:
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
    Student<string> student1("Nikhil Rawat", 18, "Computer Science", "Engineering");
    student1.display();

    Student<string> student2("Ayush ", 18, "Mechanical Engineering", "Engineering");
    student2.display();

    return 0;
}
