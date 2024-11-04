#include <iostream>
#include <vector>
using namespace std;

bool isValidArray(const vector<int>& B, int N) {
    int ones = 0;
    for (int i = 0; i < N; ++i) {
        ones += B[i];
    }
    return (ones % 2 == 0);
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> B(N);
        for (int i = 0; i < N; ++i) {
            cin >> B[i];
        }
        cout << (isValidArray(B, N) ? "YES" : "NO") << endl;
    }
    return 0;
}
