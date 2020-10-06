#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, m, y,a[100001];
    long long p = 0, v = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a[x]=i;
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> y;
        v+=a[y]+1;
        p+=n-a[y];
        
    }
    cout << v << " " << p;
    return 0;
}
