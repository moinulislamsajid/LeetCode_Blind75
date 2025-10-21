#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int p = 0, m = 0;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if (x == 1) ++p;
        else ++m;
    }

    int diff = m - p;
    int need = 0;
    if (diff > 0)
    {

        need = (diff + 1) / 2;
    }
    else
    {
        need = 0;
    }
    // adjust parity: need % 2 must equal m % 2
    if ((need % 2) != (m % 2)) ++need;

    cout << need << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
