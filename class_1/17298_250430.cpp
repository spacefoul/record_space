#include <iostream>
#include <stack>
#include <vector>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> answer(n, -1);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    stack<int> s;

    for (int i = 0; i < n; i++) {
        while (!s.empty() && arr[s.top()] < arr[i]) {
            answer[s.top()] = arr[i];
            s.pop();
        }
        s.push(i);
    }

    for (int i = 0; i < n; i++) {
        cout << answer[i] << endl;
    }

    return 0;
}