#include <iostream>
#include <string>
using namespace std;

string calculateGrade(int n) {
    if (n >= 90) {
        return "A";
    } else if (n >= 80) {
        return "B";
    } else if (n >= 70) {
        return "C";
    } else if (n >= 60) {
        return "D";
    } else { 
        return "F";
    }
}

int main() {
    int score;
    cin >> score;
    cout << calculateGrade(score) << endl;
}