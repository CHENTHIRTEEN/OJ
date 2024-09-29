#include <iostream>
using namespace std;

int main() {
    int n, N, tmp;
    cin >> N;
    int res;
    for (int i = 0; i < N; ++i) {
        res = 0;
        cin >> n;
        for (int j = 1; j <= n; ++j) {
            cin >> tmp;
            if (j % 2 == 1)res+=tmp;
            if (j % 2 == 0)res -= tmp;
        }
        cout << res << endl;
    }
    return 0;
}
