#include <iostream>
using namespace std;

string compare (int a, int b) {
    if (a < b) {
        return "<";
    } else if (a == b) {
        return "==";
    } else {
        return ">";
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << compare(a, b);
}