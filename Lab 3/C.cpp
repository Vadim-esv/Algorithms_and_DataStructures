#include <iostream>

using namespace std;

int main(){
    int n; long long a[1003];
    cin >> n;
    int x = 0;
    int f;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < n; j++)
    {
        if (x < a[j])
        {
            x = a[j];
            f = j+1;
        }
        
    }
    cout << f;
    return 0;
}