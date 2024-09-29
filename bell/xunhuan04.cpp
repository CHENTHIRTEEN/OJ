#include <bits/stdc++.h>
using namespace std;

int main()
{
    double h, tmp;
    int n;
    cin >> h;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        if (i == 0 ){
            cout << h << " ";
        }
        cout << h + tmp << " ";
    }
    return 0;
}