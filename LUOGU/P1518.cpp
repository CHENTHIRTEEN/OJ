#include <iostream>
#include <cstring>
#define N 15
using namespace std;

char map[N][N];
int face1 = 0, face2 = 0;
int d[4][2] = {{0, -1}, {1, 0}, {0, 1}, {-1, 0}};
int x1, x2, y1, y2;
int res = 0;
int main() {
    memset(map, 0, sizeof map);
    for (int i = 1; i <= 10; i++)
        for (int j = 1; j <= 10; j++)
        {
            char c = getchar();
            map[i][j] = c;
            if (c == 'F')
            {
                x1 = i;
                y1 = j;
            }
            if (c == 'C')
            {
                x2 = i;
                y2 = j;
            }
            
        }
    for (; x1 != x2 && y1 != y2; )
    {
        if (map[x1 + d[face1][0]][y1 + d[face1][1]] == '*' || 
        map[x1 + d[face1][0]][y1 + d[face1][1]] == 0)
        {
            face1  = (face1 + 1) % 4;
                
        }
        
    }
    
    
    cout << 0;
    return 0;
}