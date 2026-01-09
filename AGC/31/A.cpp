#include <iostream>
#include <cstdio>
// #define LOCAL

using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int maxn = 1e5 + 10;
char s[maxn];
ll cnt[26];

void solve()
{
    int n;
    scanf("%d", &n);
    scanf("%s", s + 1);
    ll ans = 1;
    for (int i = 0; i < 26; i++)
        cnt[i] = 0;
    for (int i = 1; i <= n; i++)
    {
        int c = s[i] - 'a';
        cnt[c]++;
    }
    for (int i = 0; i < 26; i++)
    {
        ans *= cnt[i] + 1;
        ans %= mod;
    }
    ans--;
    ans = (ans + mod) % mod;
    printf("%lld\n", ans);
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