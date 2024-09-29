#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#define maxN 510
using namespace std;

string s1, s2;
int add = 0, l1, l2, l;
int num1[maxN], num2[maxN], res[maxN];
int main() {
    memset(num1, 0, sizeof num1);
    memset(num2, 0, sizeof num2);
    memset(res, 0, sizeof res);
    cin >> s1 >> s2;
    l1 = s1.size();
    l2 = s2.size();
    l = l1 > l2 ? l1 : l2;
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    for (int i = 0; i < l1; i++) {
        num1[i] = s1[i] - '0';
    }
    for (int i = 0; i < l2; ++i) {
        num2[i] = s2[i] - '0';
    }
    for (int i = 0; i <= l; ++i) {
        res[i] += num1[i] + num2[i] + add;
        add = res[i] / 10;
        res[i] %= 10;
    }
    if (res[l] == 0)l--;
    while (l >= 0)cout << res[l--];
    return 0;
}
