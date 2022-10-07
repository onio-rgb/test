#include <bits/stdc++.h>
using namespace std;
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair
const ll mod = 1e9 + 7, N = 2e6 + 7, M = 2e6 + 7, INF = INT_MAX / 10;
ll powe(ll x, ll y)
{
    x = x % mod, y = y % (mod - 1);
    ll ans = 1;
    while (y > 0)
    {
        if (y & 1)
        {
            ans = (1ll * x * ans) % mod;
        }
        y >>= 1;
        x = (1ll * x * x) % mod;
    }
    return ans;
}
ll dig(ll x)
{
    int count = 0;
    while (x)
    {
        count++;
        x /= 10;
    }
    return count;
}
void solve()
{
    int n;
    cin >> n;
    priority_queue<ll> a, b;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.push(x);
    }
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        b.push(x);
    }
    ll count=0;
    while (a.size() != 0)
    {
        if (a.top() == b.top())
        {
            a.pop();
            b.pop();
        }
        else if (a.top() > b.top())
        {
            ll x = a.top();
            a.pop();
            a.push(dig(x));
            ++count;
        }
        else
        {
            ll x = b.top();
            b.pop();
            b.push(dig(x));
            ++count;
        }
    }
    cout<<count<<endl;
}

signed main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
