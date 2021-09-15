#include <iostream>

using namespace std;

int gcd(long long a, long long b) {
    while (a > 0 && b > 0) {
        // cout << a << " " << b << endl;
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    return a + b;
}

int lcd(long long a, long long b){
    return a * b / gcd(a,b);
}

int main() {
    long long a, b;
    cin >> a >> b;
    cout << lcd(a, b);
    return 0;
}