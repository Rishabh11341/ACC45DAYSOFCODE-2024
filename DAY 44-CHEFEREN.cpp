#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, A, B;
        cin >> N >> A >> B;
        int oddEpisodes = (N + 1) / 2;
        int evenEpisodes = N / 2;
        int totalDuration = oddEpisodes * B + evenEpisodes * A;
        cout << totalDuration << endl;
    }
    return 0;
}
