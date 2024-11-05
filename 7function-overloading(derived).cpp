#include <iostream>
using namespace std;


class Base {
public:
   
    virtual void sum(int a, int b, int c) {
        int result = a + b + c;
        cout << "Base class sum: " << result << endl;
    }
};


class Derived : public Base {
public:
    
    void sum(int a, int b, int c) override {
        int result = a + b + c + 10;  
        cout << "Derived class sum (with extra 10): " << result << endl;
    }
};

int main() {
    
    Base baseObj;
    Derived derivedObj;

    int num1 = 5, num2 = 10, num3 = 15;

   
    baseObj.sum(num1, num2, num3); 

    
    derivedObj.sum(num1, num2, num3); 

   
    derivedObj.Base::sum(num1, num2, num3); 

   
    Base* basePtr = &derivedObj;
    basePtr->sum(num1, num2, num3);

    return 0;
}
