#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >>b >> c;
    cout << left << setw(8) << a << " ";
    cout << left << setw(8) << b << " ";
    cout << left << setw(8) << c << " ";
    return 0;
}
