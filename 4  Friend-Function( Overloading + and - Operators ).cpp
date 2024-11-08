#include <iostream>
using namespace std;

class Number {
private:
    int value;
    
public:
    Number(int val) : value(val) {}

   
    friend Number operator+(const Number &n1, const Number &n2);

   
    friend Number operator-(const Number &n1, const Number &n2);

    void display() {
        cout << "Value: " << value << endl;
    }
};


Number operator+(const Number &n1, const Number &n2) {
    return Number(n1.value + n2.value);
}

Number operator-(const Number &n1, const Number &n2) {
    return Number(n1.value - n2.value);
}

int main() {
    Number num1(10), num2(5);

    Number sum = num1 + num2;  
    sum.display();

    Number diff = num1 - num2;
    diff.display();

    return 0;
}
