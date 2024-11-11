#include <iostream>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;
    
    int watched_time = Y / 2 + (X - Y);
    cout << watched_time << endl;
    
    return 0;
}
