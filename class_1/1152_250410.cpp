#include <iostream>
#include <string>
using namespace std;

int wordcounter (string s) {
    int cnt = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            cnt++;
            while (i < s.length() && s[i] != ' ') {
                i++;
            }
        }
    }
    return cnt;
}

int main() {
    string s;
    getline(cin, s);
    cout << wordcounter(s) << endl;
    return 0;
}
