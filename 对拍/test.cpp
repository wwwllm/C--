#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;
    sort(a.begin(), a.end(), greater<int>());
    priority_queue<int, vector<int>, greater<int>> pq;
    if (n <= x)
    {
        cout << *max_element(a.begin(), a.end()) << '\n';
        return;
    }
    for (int i = 0; i < x; i++)
        pq.push(a[i]);
    int ans = 0;
    for (int i = x; i < n;)
    {
        ans = pq.top();
        int res = pq.top();
        while (pq.size() && pq.top() == res)
            pq.pop();
        while (pq.size() < x && i < n)
        {
            pq.push(a[i] + ans);
            i++;
        }
    }
    int ma = 0;
    while (pq.size())
    {
        ma = max(pq.top(), ma);
        pq.pop();
    }
    cout << ma << '\n';
}
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}