#include <iostream>
using namespace std;

class Number {
private:
    int a;
    
public:
    Number(int val) : a(val) {}

   
    Number operator++() {
        a += 5;
        return *this;
    }

   
    Number operator--() {
        a -= 1;
        return *this;
    }

    
    Number operator-() {
        a = -a;
        return *this;
    }

    void display() {
        cout << "Value of a: " << a << endl;
    }
};

int main() {
    Number num(10);

    ++num;  
    num.display();

    --num;  
    num.display();

    -num;  
    num.display();

    return 0;
}
