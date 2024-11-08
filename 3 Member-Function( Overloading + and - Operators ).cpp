#include <iostream>
using namespace std;

class Number {
private:
    int value;
    
public:
    Number(int val) : value(val) {}

   
    Number operator+(const Number &other) {
        return Number(value + other.value);
    }

    
    Number operator-(const Number &other) {
        return Number(value - other.value);
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number num1(10), num2(5);

    Number sum = num1 + num2;  
    sum.display();

    Number diff = num1 - num2;  
    diff.display();

    return 0;
}
