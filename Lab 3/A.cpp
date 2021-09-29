#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int x;
int a[1001];

int main(){
    int n;
    cin >> n;
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            b.push_back(i+1);
        }
    }
    if (b.size() != 0)
    {
        for (int j = b.size() - 1; j >= 0; j--)
        {
        cout << b[j] << endl;
        }
    }
    return 0;
}