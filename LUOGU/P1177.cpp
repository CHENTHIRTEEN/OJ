#include <iostream>
#include <cstring>
#define maxN 100001
using namespace std;
void  qsort(int a[], int l, int r);
int num[maxN], n;
void  qsort(int a[], int l, int r){
    int i = l, j = r, flag = a[(l + r) / 2], tmp;
    do {
        while (a[i] < flag)i++;
        while (a[j] > flag)j--;
        if (i <= j){
           tmp = a[i]; a[i] = a[j]; a[j] = tmp;
           i++; j--;
        }
    }while (i <= j);
    if (l < j) qsort(a, l, j);
    if (i < r) qsort(a, i, r);
}
int main() {
    memset(num, 0, sizeof num);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num[i];
    }
    qsort(num, 0, n - 1);
    for (int i = 0; i < n; ++i) {
        cout << num[i] << " ";
    }
    return 0;
}