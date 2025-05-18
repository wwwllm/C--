#include <bits/stdc++.h>

using i32 = int;
using i64 = long long;
using u32 = unsigned;
using u64 = unsigned long long;
using u128 = unsigned __int128;
#define int long long
using namespace std;

int n, o;
void work()
{
    cout << "add " << n - 1 << endl;
    cout << "!" << endl;
    cin >> o;
}

void solve()
{
    cin >> n;
    cout << "digit" << endl;
    cin >> o;
    cout << "digit" << endl;
    cin >> o;

    cout << "add -5" << endl;
    cin >> o;
    if (o == 0)
    {
        cout << "add -3" << endl;
        cin >> o;
        if (o == 0)
        {
            cout << "add -1" << endl;
            cin >> o;
            if (o == 0)
            {
                work();
                return;
            }
            cout << "add -1" << endl;
            cin >> o;
            if (o == 0)
            {
                work();
                return;
            }
            else
                work();
        }
        else
        {
            cout << "add -1" << endl;
            cin >> o;
            if (o == 0)
            {
                work();
                return;
            }
            else
                work();
        }
        return;
    }

    cout << "add -1" << endl;
    cin >> o;
    if (o == 0)
    {
        work();
        return;
    }
    cout << "add -1" << endl;
    cin >> o;
    if (o == 0)
    {
        work();
        return;
    }
    cout << "add -1" << endl;
    cin >> o;
    if (o == 0)
    {
        work();
        return;
    }
    work();
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
