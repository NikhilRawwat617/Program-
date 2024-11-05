#include <iostream>
using namespace std;

class Student {
public:
   
    void displaySum(int a, int b) {
        cout << "The sum of " << a << " and " << b << " is: " << (a + b) << endl;
    }
};

int main() {
    Student student;
    student.displaySum(10, 20); 

    return 0;
}
