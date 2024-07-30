#include <iostream>
#define maxN 210
using namespace std;

int a[maxN], b[maxN];
int N, Na, Nb;
int resa = 0, resb = 0;
int dp[5][5] = {{0, 0, 1, 1, 0}, {1, 0, 0, 1, 0}, 
{0, 1, 0, 0, 1}, {0, 0, 1, 0, 1}, {1, 1, 0, 0, 0}};
int main() {
    cin >> N >> Na >> Nb;
    for (int i = 0; i < Na; i++)cin >> a[i];
    for (int i = 0; i < Nb; i++)cin >> b[i];
    for (int i = 0; i < N; i++)
    {
        resa += dp[a[i % Na]][b[i % Nb]];
        resb += dp[b[i % Nb]][a[i % Na]];
    }
    cout << resa << " " << resb << endl;
    return 0;
}
