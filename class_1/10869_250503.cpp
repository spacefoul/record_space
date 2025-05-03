#include <iostream>
using namespace std;

int calculator(int a, int b) {
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;
    return 0;
}


int main() {
    int a, b;
    cin >> a;
    cin >> b;
    calculator(a, b);
}