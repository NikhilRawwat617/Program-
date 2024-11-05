#include <iostream>
#include <cmath>

class PrimeChecker; 

class Number {
private:
    int value;  

public:
   
    Number(int num) : value(num) {}

  
    int getValue() const { return value; }

   
    friend class PrimeChecker;
};

class PrimeChecker {
public:
 
    bool isPrime(const Number& num) {
        int value = num.value;  
        if (value <= 1) {
            return false;  e
        }
        for (int i = 2; i <= std::sqrt(value); ++i) {
            if (value % i == 0) {
                return false;  
            }
        }
        return true;  
    }
};

int main() {
    Number num(29);  
    PrimeChecker checker;  

  
    if (checker.isPrime(num)) {
        std::cout << num.getValue() << " is a prime number." << std::endl;
    } else {
        std::cout << num.getValue() << " is not a prime number." << std::endl;
    }

    return 0;
}
