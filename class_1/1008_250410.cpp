#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    double result = a / b;

    cout << fixed << setprecision(9) << result << endl;
}