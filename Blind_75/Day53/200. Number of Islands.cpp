
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        string t = s;          // copy
        sort(t.begin(), t.end()); // sort the copy

        if (s == t)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
