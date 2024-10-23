#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int H, X, Y;
        cin >> H >> X >> Y;
        
        if (H <= Y) {
            cout << 1 << endl;
        } else {
            H -= Y;
            cout << 1 + ceil((double)H / X) << endl;
        }
    }
    return 0;
}
