#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int s;
    int res = 0;
    cin >> s;
    for (int i = 1; i < int(sqrt(s)) + 1; ++i) {
        if (s % i == 0)res ++;
    }
    cout << res << endl;
    return 0;
}
