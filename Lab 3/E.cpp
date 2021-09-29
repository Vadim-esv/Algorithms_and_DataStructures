#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int>a;
    int n;
    cin >> n;
    int f;
    for (int i = 0; i < n; i++)
    {
        cin >> f;
        a.insert(f);
    }
    a.erase(--a.end());
    set <int>::iterator it;
    it = a.end();
    --it;
    cout << *it;
    return 0;
}