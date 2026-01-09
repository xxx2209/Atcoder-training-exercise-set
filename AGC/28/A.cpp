#include <iostream>
#include <cstdio>
// #define LOCAL

using namespace std;
typedef long long ll;
const int maxn = 1e5 + 10;
char s[maxn], t[maxn];

ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return a / gcd(a, b) * b;
}

void solve()
{
    int n, m;
    scanf("%d %d\n", &n, &m);
    scanf("%s\n%s", s, t);
    ll g = gcd(n, m);
    ll l = lcm(n, m);
    for (int i = 0; i < g; i++)
    {
        if (s[n / g * i] != t[m / g * i])
        {
            printf("-1\n");
            return;
        }
    }
    printf("%lld\n", l);
}

int main()
{
#ifdef LOCAL
    freopen("C:/JNU/c++/in.txt", "r", stdin);
    freopen("C:/JNU/c++/out.txt", "w", stdout);
#endif
    int T = 1;
    // scanf("%d", &T);
    while (T--)
    {
        solve();
    }
#ifdef LOCAL
    fclose(stdin);
    fclose(stdout);
#endif
    return 0;
}