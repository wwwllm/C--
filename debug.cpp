#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    return b > 0 ? gcd(b, a % b) : a;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int T, p, s, g, i, j, r, h, w;
    for (cin >> T; T > 0; T--)
    {
        cin >> p >> s;
        g = gcd(p, s);
        p /= g;
        s /= g;
        if (p % 2 == 1)
        {
            p *= 2;
            s *= 2;
        }
        if (p > s * 2 + 2)
        {
            cout << "-1\n";
            continue;
        }
        if (p == s * 2 + 2)
        {
            cout << s << '\n';
            for (i = 0; i < s; i++)
                cout << "0 " << i << '\n';
            continue;
        }
        r = 40000 / s;
        s *= r;
        p *= r;
        h = p / 4;
        w = p / 2 - h;
        cout << s << '\n';
        for (i = 0; i < h; i++)
            cout << "0 " << i << '\n';
        for (i = 1; i < w; i++)
            cout << i << " 0\n";
        s -= h + w - 1;
        for (i = 1; i < h; i++)
        {
            for (j = 1; j < w; j++)
            {
                if (s > 0)
                {
                    cout << i << ' ' << j << '\n';
                    s--;
                }
                if (s == 0)
                    break;
            }
            if (s == 0)
                break;
        }
        assert(s == 0);
    }
    return 0;
}