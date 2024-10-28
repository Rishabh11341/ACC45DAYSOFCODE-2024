#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> characteristics(N);
        for (int i = 0; i < N; i++) {
            cin >> characteristics[i];
        }
        int count = 0;
        for (int i = 0; i < N; i++) {
            if ((characteristics[i] + K) % 7 == 0) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
