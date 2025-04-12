#include <iostream>
using namespace std;

int calculateLeapYear(int n) {
    if (n % 4 == 0) {
        if (n % 100 == 0 && n % 400 != 0) {
            return 0;
        } else {
            return 1;
        }
    } else {
        return 0;
    }
}

int main() {
    int year;
    cin >> year;
    cout << calculateLeapYear(year) << endl;
}