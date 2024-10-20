#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, A, B;
        cin >> N >> A >> B;
        int rounds = 0;
        while (N > 1) {
            N /= 2;
            rounds++;
        }
        int total_time = rounds * A + (rounds - 1) * B;
        cout << total_time << endl;
    }
    return 0;
}
