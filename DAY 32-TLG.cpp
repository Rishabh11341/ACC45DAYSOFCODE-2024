#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, s1 = 0, s2 = 0, maxLead = 0, winner;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int si, ti;
        cin >> si >> ti;
        s1 += si;
        s2 += ti;
        int lead = abs(s1 - s2);
        if (lead > maxLead) {
            maxLead = lead;
            winner = (s1 > s2) ? 1 : 2;
        }
    }
    cout << winner << " " << maxLead;
    return 0;
}
