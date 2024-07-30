#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#define maxN 10001
using namespace std;

int res[maxN];
string s1, s2;
int l1, l2, l;
int main() {
    memset(res, 0, sizeof res);
    cin >> s1 >> s2;
    l1 = s1.length();
    l2 = s2.length();
    l = l1 + l2;
    reverse(s1.begin(), s1.end());       
    reverse(s2.begin(), s2.end());
    if (l1 >= l2)
    {
        for (int i = 0; i < l1 - l2; i++)
        {
            s2 += '0';
        }
        
    }else{
        for (int i = 0; i < l2 - l1; i++)
        {
            s1 += '0';
        }
        
    }
    for (int i = 0; i < l1; i++)
    {
        for (int j = 0; j < l2; j++)
        {
            res[i + j - 1] += (s2[j] - '0') * (s1[i] - '0');
        }
        
    }
    for (int i = 1; i <= l; i++)
    {
        res[i + 1] += res[i] / 10;
        res[i] %= 10;
    }
    for (; !res[l]; )
    {
        l--;
    }
    
    for (int i = max(l, 1); i >= 1; i--)
    {
        cout << res[i];
    }
    
    return 0;
}