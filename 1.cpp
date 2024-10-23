#include <iostream>
using namespace std;

class Sum {
public:
    Sum(int n) {
        int sum = n * (n + 1) / 2;
        display(sum, n);
    }

    void display(int sum, int n) {
        cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    Sum s(n);
    return 0;
}
