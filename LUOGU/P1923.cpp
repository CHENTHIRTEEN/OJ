#include <iostream>
#define N 5000000
using namespace std;
int a[N];
int n, k;
int res = 0;

void findkth(int a[], int l, int r){
    if (l == r){
        res = a[l];
        return;
    }
    int i = l, j = r, flag = a[(l + r) / 2], tmp;
    do{
        while (a[i] < flag) i++;
        while (a[j] > flag) j--;
        if (i <= j){
            tmp = a[i]; a[i] = a[j]; a[j] = tmp;
            i++; j--;
        }
    } while (i <= j);
    if (k <= j) findkth(a, l, j);
    else if (i <= k) findkth(a,i, r);
    else findkth(a, j + 1, i - 1);
}

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    findkth(a, 0, n - 1);
    cout << res << endl;
    return 0;
}
