#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y, R;
        cin >> X >> Y >> R;
        int extraSticks = R / 30;
        int totalSticks = X + extraSticks;
        int plates = (totalSticks + Y - 1) / Y;
        cout << plates << endl;
    }
    return 0;
}
