#include <iostream>
#include <string>
using namespace std;

void mkStar(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    mkStar(n);
}