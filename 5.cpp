#include <iostream>
using namespace std;

class Base {
protected:
    int num1;
    int num2;

public:
    Base(int a, int b) : num1(a), num2(b) {}
};

class Derived : public Base {
public:
    Derived(int a, int b) : Base(a, b) {}

    void product() {
        cout << "Product of " << num1 << " and " << num2 << " is: " << (num1 * num2) << endl;
    }
};

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    Derived obj(a, b);
    obj.product();

    return 0;
}
