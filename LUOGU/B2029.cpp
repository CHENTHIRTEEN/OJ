#include <iostream>
#define PI 3.14
using namespace std;

double s = 0.0;
int main() {
    int h, r;
    cin >> h >> r;
    s = PI * r * r * h;
    cout << int(20000 / s) + 1;
    return 0;
}
