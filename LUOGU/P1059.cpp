#include <iostream>
#include <algorithm>
#define maxN 1010
using namespace std;

int a[maxN], res[maxN], n, cnt = 0, tmp = -1;
int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; ++i) {
        if (a[i] != tmp) res[cnt++] = a[i];
        tmp = a[i];
    }
    cout << cnt << endl;
    for (int i = 0; i < cnt; ++i) {
        cout << res[i] << ' ';
    }
    return 0;
}
