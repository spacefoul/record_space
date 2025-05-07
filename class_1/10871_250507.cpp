#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> seq(N);
    for (int i = 0; i < N; i++) {
        cin >> seq[i];
    }

    for (int i = 0; i < N; i++) {
        if (X > seq[i]) {
            cout << seq[i] << " ";
        }
    }

}
