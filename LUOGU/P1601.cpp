#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

const int maxN = 502;
int sum[maxN];
string s1;
string s2;
int l1, l2, l;
int main()
{
    memset(sum, 0, sizeof sum);
    cin >> s1 >> s2;
    l1 = s1.length();
    l2 = s2.length();
    l = l1 > l2 ? l1 : l2;
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
    
    for (int i = 0; i < l; i++)
    {
        sum[i] += ((s1[i] - '0') + (s2[i] - '0'));
        sum[i + 1] = sum[i] / 10;
        sum[i] %= 10;
    }
    if (sum[l] != 0)
    {
        l++;
    }
    for (int i = l - 1; i >= 0; i--)
    {
        cout << sum[i];
    }
    
    return 0;
}