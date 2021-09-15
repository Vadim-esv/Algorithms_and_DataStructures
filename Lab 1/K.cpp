  
#include <iostream>
#include <cmath>

using namespace std;

void prime(long long n) {
    bool is_prime = true;
    for (long long x = 2; x * x < n; x++) {
        if (n % x == 0) 
                is_prime = false;
        }
    if (is_prime)
            cout << "prime";
    else cout << "composite";
}

int main() {
    long long n;
    cin >> n;
    prime(n);
    return 0;
}