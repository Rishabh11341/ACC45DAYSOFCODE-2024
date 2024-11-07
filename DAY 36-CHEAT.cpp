#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int tuesdays = N / 7;
        if (N % 7 >= 2) tuesdays += 1;
        cout << tuesdays << endl;
    }
    return 0;
}
