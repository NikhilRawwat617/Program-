#include <iostream>
using namespace std;


class B;
class C;


class A {
private:
    int privateA;
protected:
    int protectedA;
public:
    A(int pA, int pA2) : privateA(pA), protectedA(pA2) {}

  
    friend void displayData(const A& a, const B& b, const C& c);
};


class B {
private:
    int privateB;
protected:
    int protectedB;
public:
    B(int pB, int pB2) : privateB(pB), protectedB(pB2) {}


    friend void displayData(const A& a, const B& b, const C& c);
};


class C {
private:
    int privateC;
protected:
    int protectedC;
public:
    C(int pC, int pC2) : privateC(pC), protectedC(pC2) {}

    
    friend void displayData(const A& a, const B& b, const C& c);
};


void displayData(const A& a, const B& b, const C& c) {
    cout << "Accessing data from class A: " << endl;
    cout << "Private A: " << a.privateA << endl;
    cout << "Protected A: " << a.protectedA << endl;

    cout << "\nAccessing data from class B: " << endl;
    cout << "Private B: " << b.privateB << endl;
    cout << "Protected B: " << b.protectedB << endl;

    cout << "\nAccessing data from class C: " << endl;
    cout << "Private C: " << c.privateC << endl;
    cout << "Protected C: " << c.protectedC << endl;
}

int main() {
   
    A a(1, 2);  
    B b(3, 4);  
    C c(5, 6);  

   
    displayData(a, b, c);

    return 0;
}
