#include <iostream>
#include <cstring>
using namespace std;

const int dx[] = {1, 1, 1, 0, 0, -1, -1, -1};
const int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
const int maxn = 105;
char g[maxn][maxn];
int n, m;
int main()
{
    memset(g, -1, sizeof g);
    cin >> n >> m;
    for (int i = 1; i<= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> g[i][j];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (g[i][j] != '*')
            {
                int res = 0;
                for (int k = 0; k < 8; k++)
                {
                    if (g[i + dx[k]][j + dy[k]] == '*')
                    {
                        res ++;
                    }
                    
                }
                cout << res;
            }else{
                cout << "*";
            }
            
        }
        cout << endl;
    }
    
    return 0;
}