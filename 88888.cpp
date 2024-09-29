#include <iostream>
#include <cstdio>
using namespace std;

int n;
int max1 = -2e9;
int min1 = 2e9;
double avg = 0.0;
int main(){
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        int tmp;
        cin >> tmp;
        if (tmp >= max1)max1 = tmp;
        if (tmp <= min1)min1 = tmp;
        avg += tmp;
    }
    printf("%d\n%d\n%.2f", max1, min1, avg / n);
    return 0;
}