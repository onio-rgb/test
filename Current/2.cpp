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
#define yes              \
    {                    \
        cout << "YES\n"; \
        return;          \
    }
#define no              \
    {                   \
        cout << "NO\n"; \
        return;         \
    }
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

void solve()
{
    string s;
    cin>>s;
    vector<int> count(3,0);
    for(int i=0;i<s.length();i+=2)
    {
        count[s[i]-'0'-1]++;
    }
    int c=0;
    for(int i=0;i<3;i++)
    {
        while(count[i])
        {
            if(c!=0)cout<<"+";
            cout<<i+1;
            count[i]--;
            ++c;
        }
    }
    cout<<endl;
}

signed main()
{
    fast;
    int t = 1;
    solve();
    return 0;
}
