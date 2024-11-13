#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;
        
        int totalCost = A + B + C;
        int minPrice = min({A, B, C});
        
        cout << totalCost - minPrice << endl;
    }
    
    return 0;
}
