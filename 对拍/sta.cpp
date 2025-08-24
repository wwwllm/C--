#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, x;
        cin >> n >> x;
        int sum = 0, a;
        int ma = 0;
        for (int i = 1; i <= n; i++)
        {
            scanf("%lld", &a);
            sum += a;
            ma = max(ma, a);
        }
        cout << max(ma, (sum + x - 1) / x) << endl;
    }
    return 0;
}