#include <iostream>
using namespace std;

int main() {
    int arr[4];
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i] * arr [i];
    }
    sum = sum % 10;
    cout << sum << endl;
}