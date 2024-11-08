#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, s;
        cin >> n >> x >> s;
        int coin_position = x;
        while (s--) {
            int a, b;
            cin >> a >> b;
            if (coin_position == a) coin_position = b;
            else if (coin_position == b) coin_position = a;
        }
        cout << coin_position << endl;
    }
    return 0;
}
