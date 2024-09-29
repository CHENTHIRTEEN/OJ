#include <iostream>
#include <algorithm>
#define maxN 301
using namespace std;
struct stu{
    int id, a, b, c, total;
}stus[maxN];
bool cmp(stu a, stu b){
    if (a.total != b.total) return a.total > b.total;
    if (a.a != b.a) return a.a > b.a;
    if (a.id != b.id) return a.id < b.id;
}
int n;
int main() {
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        stus[i].id = i;
        cin >> stus[i].a >> stus[i].b >> stus[i].c;
        stus[i].total = stus[i].a + stus[i].b + stus[i].c;
    }
    sort(stus + 1, stus + n + 1, cmp);
    for (int i = 1; i <= 5; ++i) {
        cout << stus[i].id << " " << stus[i].total << endl;
    }
    return 0;
}
