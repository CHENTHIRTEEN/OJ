#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a, int b){
    return a > b;
}
int main() {
    int a[10] = {45,87,43,12,65,32,764,4324,654,32};
    for(auto i:a)cout<< i << " ";
    cout << endl;
    sort(a, a + 10);
    for(auto i:a)cout<< i << " ";
    cout << endl;
    // 用函数实现排序规则
    sort(a, a + 10, cmp);
    for(auto i:a)cout<< i << " ";
    cout << endl;
    // 用lambda实现排序规则
    sort(a, a + 10, [](int a, int b){return a > b;});
    for(auto i:a)cout<< i << " ";
    cout << endl;
    return 0;
}
