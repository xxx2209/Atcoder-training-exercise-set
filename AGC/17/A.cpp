#include <iostream>
#include <cstdio>
// #define LOCAL

using namespace std;
typedef long long ll;
const int maxn = 55;
int a[maxn];

void solve()
{
    int n, p;
    scanf("%d %d", &n, &p);
    int cnt[2] = {0, 0};
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        cnt[a[i] & 1]++;
    }
    ll ans;
    if (cnt[1] == 0)
    {
        if (p)
            ans = 0;
        else
            ans = (ll)1 << n;
    }
    else
        ans = (ll)1 << (n - 1);
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