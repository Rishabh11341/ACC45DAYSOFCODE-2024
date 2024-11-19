#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int S, X, Y, Z;
        cin >> S >> X >> Y >> Z;
        int available = S - (X + Y);
        if (available >= Z) {
            cout << 0 << endl;
        } else if ((S - X) >= Z || (S - Y) >= Z) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }
    return 0;
}
