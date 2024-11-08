#include <iostream>
using namespace std;

class Sum {
public:
    virtual int calculateSum(int a, int b) {
        return a + b; 
    }
};

class DerivedSum : public Sum {
public:
   
    int calculateSum(int a, int b, int c) {
        return a + b + c;  
    }
};

int main() {
    Sum *sumPtr;
    DerivedSum obj;
    
    sumPtr = &obj;
    cout << "Sum of 2 numbers: " << sumPtr->calculateSum(10, 20) << endl;
    
   
    cout << "Sum of 3 numbers: " << obj.calculateSum(10, 20, 30) << endl;
    
    return 0;
}
