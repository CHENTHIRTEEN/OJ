#include <iostream>

using namespace std;

int x, y, z, n, m;
int res =0;
int main() {
    cin >> x >> y >> z >> n >> m;
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= n; ++j) {
            for (int k = 0; k <= n; ++k) {
                if (i + j + k == m && i * x + j * y + k / z == n && k % z == 0)res++;
            }
        }
    }
    cout << res << endl;
    return 0;
}
