#include <iostream>
#include <string>
using namespace std;
const int maxN = 1e6 + 5;
struct node{
    string name;
    int head;
}a[maxN];

int n, m, x, y;
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)cin >> a[i].head >> a[i].name;
    int now = 0;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        if (a[now].head == 0 && x == 0) now = (now + n - y) % n;
        else if(a[now].head == 0 && x == 1) now = (now + y) % n;
        else if(a[now].head == 1 && x == 0) now = (now + y) % n;
        else if(a[now].head == 1 && x == 1) now = (now + n - y) % n;
    }
    cout << a[now].name << endl;
    
    return 0;
}