#include <iostream>
#include <cstring>
#define maxN 110
using namespace std;

int dx1[13] = {0, 0, 0, 0, 0, -1, -2, 1, 2, -1, -1, 1, 1};
int dy1[13] = {0, -1, -2, 1, 2, 0, 0, 0, 0, 1, -1, 1, -1};
int dx2[25] = {0, 0, 0, 0, 0, -1, -1, -1, -1, -1,-2, -2, -2, -2, -2,  1, 1, 1, 1, 1,  2, 2, 2, 2, 2};
int dy2[25] = {0, -1, -2, 1, 2, -1, -2, 1, 2, 0, -1, -2, 1, 2, 0, -1, -2, 1, 2, 0, -1, -2, 1, 2, 0};
int map[maxN][maxN];
int n, m, k;
int x, y;
int res = 0;
int main() {
    memset(map, 0, sizeof map);
    cin >> n >> m >> k;
    for (int i = 1; i <= m; ++i) {
        cin >> x >> y;
        for (int j = 0; j < 13; ++j) {
            map[x + dx1[j]][y + dy1[j]] = 1;
        }
    }
    for (int i = 1; i <= k; ++i) {
        cin >> x >> y;
        for (int j = 0; j < 25; ++j) {
            map[x + dx2[j]][y + dy2[j]] = 1;
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (map[i][j] == 0)res++;
        }
    }
    cout << res << endl;
    return 0;
}
