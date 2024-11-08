#include <iostream>
#include <cstring> 
using namespace std;


template <typename T>
T sum(T a, T b) {
    return a + b;
}


template <>
const char* sum(const char* a, const char* b) {
    static char result[100];
    strcpy(result, a);
    strcat(result, b);
    return result;
}

int main() {
    int x = 10, y = 20;
    cout << "Sum of integers: " << sum(x, y) << endl;

    double a = 5.5, b = 3.5;
    cout << "Sum of doubles: " << sum(a, b) << endl;

    const char* str1 = "Hello, ";
    const char* str2 = "World!";
    cout << "Concatenation of strings: " << sum(str1, str2) << endl;

    return 0;
}
