#include <iostream>
#include <cstring>
#define N 15
#define maxN 600000
using namespace std;

char map[N][N];
int face1 = 0, face2 = 0;
int d[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
int x1, x2, y1, y2;
int res = 0;
char c;
int main() {
    memset(map, '*', sizeof map);
    for (int i = 1; i <= 10; i++)
        for (int j = 1; j <= 10; j++) {
            cin >> c;
            map[i][j] = c;
            if (c == 'F') {
                x1 = i;
                y1 = j;
            }
            if (c == 'C') {
                x2 = i;
                y2 = j;
            }

        }
    for (int i = 1; i <= 100000; i++)
    {
        if (map[x1 + d[face1][0]][y1 + d[face1][1]] == '*')
        {
            face1 = (face1 + 1) % 4;
        }else{
            x1 += d[face1][0];
            y1 += d[face1][1];
        }
        if (map[x2 + d[face2][0]][y2 + d[face2][1]] == '*')
        {
            face2 = (face2 + 1) % 4;
        }else{
            x2 += d[face2][0];
            y2 += d[face2][1];
        }
  
        res ++;
        if (x1 == x2 && y1 == y2)break;
    }


    if (res > 10000){
        cout << 0 << endl;
    } else{
        cout << res << endl;
    }
    return 0;
}